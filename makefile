# Makefile para PIA Tarea 6
# Autor: Jair Eliud Flores Puente

CXX := g++
CXXFLAGS_DEBUG := -std=c++11 -g -O0 -Wall -Wextra
CXXFLAGS_RELEASE := -std=c++11 -O2 -Wall -Wextra
SRCDIR := src/client
BINDIR_DEBUG := bin/debug
BINDIR_RELEASE := bin/release
TARGET := payload_client

.PHONY: all debug release clean

all: debug

debug:
	mkdir -p $(BINDIR_DEBUG)
	$(CXX) $(CXXFLAGS_DEBUG) $(SRCDIR)/payload_client.cpp -o $(BINDIR_DEBUG)/$(TARGET)

release:
	mkdir -p $(BINDIR_RELEASE)
	$(CXX) $(CXXFLAGS_RELEASE) $(SRCDIR)/payload_client.cpp -o $(BINDIR_RELEASE)/$(TARGET)

clean:
	rm -rf bin/*
