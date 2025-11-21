# Proyecto Integrador Aplicado (PIA)  
### Payload educativo para análisis estático y dinámico

## **Objetivo**
Desarrollar un **payload benigno** basado en esteganografía LSB para fines educativos, permitiendo practicar análisis estático, dinámico e ingeniería inversa en un entorno **100% aislado**.

---

## **Plataforma objetivo y dependencias**
- **Sistema objetivo:** Linux (Ubuntu 22.04 LTS) — ejecutado únicamente en VM aislada.  
- **Compilador:** `g++` (>= 11.x), con soporte C++11.  
- **Dependencias opcionales:**  
  - `python3` (generación de imágenes)  
  - `imagemagick` (conversión PNG → PPM)  

---

## **Estructura del repositorio**
/

├── README.md 

├── ETHICS.md 

├── CHANGELOG.md 

├── METADATA.md 

├── DELIVERY_CHECKLIST.md 

├── src/ 

│ └── payload_stego.cpp 

├── bin/ 

│ ├── payload_debug_x64 

│ └── payload_release_x64 

├── docs/ 

│ ├── report_final.pdf 

│ └── tests.md 

├── analysis/ 

│ └── ghidra_export.zip 

└── evidence/ 

| └──evidence_YYYYMMDD_vm_snapshot.png 
    
| └──evidence_YYYYMMDD_execution.png 
  
| └──evidence_YYYYMMDD_ghidra.png 
    
| └── demo_short.mp4 
    


---

## **Clonar el repositorio**
```bash
git clone https://github.com/DavidRdzG/PIA-PAC
cd PIA-PAC
```
## **Instalacion de dependencias**
```bash
sudo apt update
sudo apt install -y build-essential g++ make python3 imagemagick
```
## **Compilación**
### Build de depuración (con símbolos)
```bash
make debug
```
#### Genera:
```bash
bin/payload_debug_x64
```
### Build optimizada (release)
```bash
make release
```
#### Genera
```bash
bin/payload_release_x64
```

---


## **Uso del payload**
1. Crear o convertir una imagen
    Convertir PNG --> PPM:
    ```bash
    convert input.png test.ppm
2. Insertar mensaje
    ```bash
    ./bin/payload_debug_x64 embed test.ppm stego.ppm "Mensaje de prueba"
3. Extraer mensaje
    ```bash
    ./bin/payload_debug_x64 extract stego.ppm 18
