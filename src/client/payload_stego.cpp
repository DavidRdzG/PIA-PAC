#include <iostream>
#include <fstream>
#include <vector>
#include <string>

/*
    Payload educativo para el PIA
    Funcionalidad:
        - insertar un mensaje benigno en una imagen PPM (formato P6)
        - extraer mensaje desde una PPM ya modificada

    Ética:
        - Sin persistencia
        - Sin exfiltración
        - No afecta archivos del sistema
        - El usuario especifica rutas de prueba en VM aislada

    Formato esperado:
        ppm P6 (RGB binario)
*/

bool readPPM(const std::string &path, std::string &header, std::vector<unsigned char> &pixels) {
    std::ifstream file(path, std::ios::binary);
    if (!file) {
        std::cerr << "[ERROR] No se pudo abrir la imagen: " << path << "\n";
        return false;
    }

    std::string magic;
    int width, height, maxval;

    file >> magic >> width >> height >> maxval;
    file.ignore(1); // saltar salto de línea

    if (magic != "P6") {
        std::cerr << "[ERROR] Solo se soportan imágenes PPM P6.\n";
        return false;
    }

    header = magic + "\n" + std::to_string(width) + " " + std::to_string(height) + "\n" + std::to_string(maxval) + "\n";

    size_t dataSize = width * height * 3;
    pixels.resize(dataSize);

    file.read(reinterpret_cast<char*>(pixels.data()), dataSize);
    return true;
}

bool writePPM(const std::string &path, const std::string &header, const std::vector<unsigned char> &pixels) {
    std::ofstream out(path, std::ios::binary);
    if (!out) {
        std::cerr << "[ERROR] No se pudo escribir la imagen: " << path << "\n";
        return false;
    }

    out << header;
    out.write(reinterpret_cast<const char*>(pixels.data()), pixels.size());
    return true;
}

void embedMessage(std::vector<unsigned char> &pixels, const std::string &msg) {
    size_t totalBits = msg.size() * 8;
    if (totalBits > pixels.size()) {
        std::cerr << "[ERROR] El mensaje es demasiado grande para la imagen.\n";
        return;
    }

    for (size_t i = 0; i < msg.size(); i++) {
        for (int bit = 7; bit >= 0; bit--) {
            size_t pixelIndex = i * 8 + (7 - bit);
            unsigned char bitValue = (msg[i] >> bit) & 1;
            pixels[pixelIndex] = (pixels[pixelIndex] & 0xFE) | bitValue;
        }
    }
}

std::string extractMessage(const std::vector<unsigned char> &pixels, size_t numChars) {
    std::string msg;
    msg.reserve(numChars);

    for (size_t i = 0; i < numChars; i++) {
        unsigned char c = 0;
        for (int bit = 7; bit >= 0; bit--) {
            size_t pixelIndex = i * 8 + (7 - bit);
            unsigned char bitValue = pixels[pixelIndex] & 1;
            c |= (bitValue << bit);
        }
        msg.push_back(c);
    }

    return msg;
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        std::cout << "Uso:\n";
        std::cout << "  Embeder: " << argv[0] << " embed <imagen.ppm> <salida.ppm> <mensaje>\n";
        std::cout << "  Extraer: " << argv[0] << " extract <imagen.ppm> <num_chars>\n";
        return 0;
    }

    std::string mode = argv[1];
    std::string header;
    std::vector<unsigned char> pixels;

    if (mode == "embed") {
        if (argc != 5) {
            std::cerr << "Uso: embed <imagen.ppm> <salida.ppm> <mensaje>\n";
            return 1;
        }

        std::string input = argv[2];
        std::string output = argv[3];
        std::string message = argv[4];

        if (!readPPM(input, header, pixels)) return 1;

        embedMessage(pixels, message);

        if (!writePPM(output, header, pixels)) return 1;

        std::cout << "[OK] Mensaje embebido correctamente en " << output << "\n";
    }
    else if (mode == "extract") {
        if (argc != 4) {
            std::cerr << "Uso: extract <imagen.ppm> <num_chars>\n";
            return 1;
        }

        std::string input = argv[2];
        size_t chars = std::stoi(argv[3]);

        if (!readPPM(input, header, pixels)) return 1;

        std::string msg = extractMessage(pixels, chars);

        std::cout << "[Mensaje extraído]: " << msg << "\n";
    }
    else {
        std::cerr << "Modo no reconocido.\n";
    }

    return 0;
}