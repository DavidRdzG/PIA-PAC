## Caracteristicas del entorno de prueba
- Sistema: Linux (se probó en Ubuntu 20.04 LTS en VM)
- g++ (>= 5.4) soportando C++11
- Python 3.8+ (opcional, para el server_stub)

Comandos usados
```bash
davidsandbox@lubuntuvm:~/Desktop$ cd PIA-PAC/bin/
davidsandbox@lubuntuvm:~/Desktop/PIA-PAC/bin$ ls
debug  release
davidsandbox@lubuntuvm:~/Desktop/PIA-PAC/bin$ cd debug/
davidsandbox@lubuntuvm:~/Desktop/PIA-PAC/bin/debug$ ls
payload_client
davidsandbox@lubuntuvm:~/Desktop/PIA-PAC/bin/debug$ ls
payload_client
davidsandbox@lubuntuvm:~/Desktop/PIA-PAC/bin/debug$ ./payload_client 127.0.0.1 8000
HTTP/1.0 200 OK
Server: BaseHTTP/0.6 Python/3.13.7
Date: Sat, 08 Nov 2025 05:16:01 GMT
Content-Type: application/json
Content-Length: 64

{"status": "ok", "message": "Servidor de pruebas - PIA Tarea 6"}davidsandavidsandbox@lubuntuvm:~/Desktop/PIA-PAC/bin/debug$ ^C
davidsandbox@lubuntuvm:~/Desktop/PIA-PAC/bin/debug$ 
```
