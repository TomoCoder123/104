# Compiler
CXX = g++
CXXFLAGS = -Wall -std=c++17

OBJECTS = main.o mathfuncs.o randfuncs.o

TARGET = calc
all:calc
$(TARGET): $(OBJECTS)
	$(CXX) -o $(TARGET) $(OBJECTS)

main.o: main.cpp
	$(CXX) -c main.cpp -o main.o

mathfuncs.o: mathfuncs.cpp mathfuncs.h
	$(CXX) -c mathfuncs.cpp -o mathfuncs.o

randfuncs.o: randfuncs.cpp randfuncs.h
	$(CXX) -c randfuncs.cpp -o randfuncs.o

.PHONY: clean
clean:
	-del /F /Q $(TARGET) $(OBJECTS) 2>nul
