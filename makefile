CXX = g++
CXXFLAGS_DEBUG = -std=c++11 -g -O0 -Wall -Wextra
CXXFLAGS_RELEASE = -std=c++11 -O2 -Wall
SRC = src/client/payload_stego.cpp

DEBUG_OUT = bin/debug/payload_stego
RELEASE_OUT = bin/release/payload_stego

all: debug release

debug:
	mkdir -p bin/debug
	$(CXX) $(CXXFLAGS_DEBUG) $(SRC) -o $(DEBUG_OUT)
	@echo "[OK] Binario DEBUG generado en $(DEBUG_OUT)"

release:
	mkdir -p bin/release
	$(CXX) $(CXXFLAGS_RELEASE) $(SRC) -o $(RELEASE_OUT)
	@echo "[OK] Binario RELEASE generado en $(RELEASE_OUT)"

clean:
	rm -rf bin/debug bin/release
	@echo "[Limpieza completa]"
