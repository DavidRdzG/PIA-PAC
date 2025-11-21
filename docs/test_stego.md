# Evidencia de Ejecución — PIA-PAC

## Comandos ejecutados

```bash
$ make clean
rm -rf bin/debug bin/release
[Limpieza completa]
```

```bash
$ make debug
mkdir -p bin/debug
g++ -std=c++11 -g -O0 -Wall -Wextra src/client/payload_stego.cpp -o bin/debug/payload_stego
[OK] Binario DEBUG generado en bin/debug/payload_stego
```

```bash
$ make release
mkdir -p bin/release
g++ -std=c++11 -O2 -Wall src/client/payload_stego.cpp -o bin/release/payload_stego
[OK] Binario RELEASE generado en bin/release/payload_stego
```

```bash
$ sudo apt install imagemagick
imagemagick is already the newest version (8:7.1.1.43+dfsg1-1).
Summary:
  Upgrading: 0, Installing: 0, Removing: 0, Not Upgrading: 0
```

```bash
$ convert tux.jpg tux.ppm
```

```bash
$ /home/kali/Desktop/PIA-PAC/bin/debug/payload_stego embed tux.ppm test.ppm "Hello" > evidence/console_embed.txt 2>&1
```

```bash
$ /home/kali/Desktop/PIA-PAC/bin/debug/payload_stego extract test.ppm 5 > evidence/console_extract.txt 2>&1
```
