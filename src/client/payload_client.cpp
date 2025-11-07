// Cliente C++ - PIA Tarea 6
// Requisitos: compilar con g++ (C++11 o superior)
// Autor: Jair Eliud Flores Puente

#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <cstdlib>

#ifdef _WIN32
  // Windows sockets. Preferible usar WSL o Linux para compilación y pruebas.
  #include <winsock2.h>
  #pragma comment(lib, "ws2_32.lib")
#else
  #include <sys/types.h>
  #include <sys/socket.h>
  #include <netdb.h>
  #include <unistd.h>
#endif

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <IP_servidor> <puerto>\n";
        return 1;
    }

    const char* host = argv[1];
    const char* port = argv[2];

#ifndef _WIN32
    struct addrinfo hints{}, *res;
    std::memset(&hints, 0, sizeof(hints));
    hints.ai_family = AF_UNSPEC; // IPv4 o IPv6
    hints.ai_socktype = SOCK_STREAM;

    int rc = getaddrinfo(host, port, &hints, &res);
    if (rc != 0) {
        std::cerr << "getaddrinfo: " << gai_strerror(rc) << "\n";
        return 1;
    }

    int sockfd = -1;
    struct addrinfo* p;
    for (p = res; p != nullptr; p = p->ai_next) {
        sockfd = socket(p->ai_family, p->ai_socktype, p->ai_protocol);
        if (sockfd == -1) continue;
        if (connect(sockfd, p->ai_addr, p->ai_addrlen) == -1) {
            close(sockfd);
            sockfd = -1;
            continue;
        }
        break; // conectado
    }
    freeaddrinfo(res);

    if (sockfd == -1) {
        std::cerr << "Error: no se pudo conectar a " << host << ":" << port << "\n";
        return 1;
    }

    std::string request = "GET /status HTTP/1.1\r\nHost: ";
    request += host;
    request += "\r\nConnection: cerrada\r\n\r\n";

    ssize_t sent = send(sockfd, request.c_str(), request.size(), 0);
    if (sent == -1) {
        std::cerr << "Error al enviar la solicitud\n";
        close(sockfd);
        return 1;
    }

    // Leer respuesta y mostrar en consola
    const size_t BUF_SZ = 4096;
    std::vector<char> buffer(BUF_SZ);
    ssize_t recvd;
    while ((recvd = recv(sockfd, buffer.data(), BUF_SZ, 0)) > 0) {
        std::cout.write(buffer.data(), recvd);
    }

    if (recvd == -1) {
        std::cerr << "Error al leer la respuesta\n";
    }

    close(sockfd);
    return 0;
#else
    std::cerr << "Utilice WSL o una máquina virtual Linux con g++." << std::endl;
    return 1;
#endif
}
