# PIA — Tarea 6 (Segundo avance)

## Objetivo
Desarrollar un payload educativo en C++ que realice una petición GET `/status` a un servidor de prueba. Todo el desarrollo y pruebas se realizan en VMs aisladas y cumpliendo ETHICS.md.

## Estructura del repo
(ver la sección "Estructura propuesta" en el documento principal)

## Requisitos
- Sistema: Linux (se probó en Ubuntu 20.04 LTS en VM)
- g++ (>= 5.4) soportando C++11
- Python 3.8+ (opcional, para el server_stub)

## Compilar
Desde la raíz del repositorio:

```bash
# build debug
make debug
# build release (opcional)
make release
Los binarios quedarán en bin/debug/payload_client y bin/release/payload_client.

```

Levantar servidor
```bash

python3 src/server/server_stub.py --host 127.0.0.1 --port 8000

```

Ejecutar cliente

```bash
cd /bin/debug/payload_client 127.0.0.1 8000
```
