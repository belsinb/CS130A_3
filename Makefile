# Belsin Barkhosir
# Evan Moelter
# CS130A, Winter 2014, El Abbadi

all: prog3

prog3: main.o Truple.o MinHeap.o
	g++ -g main.o Truple.o MinHeap.o -o prog3

main.o: main.cpp
	g++ -g -c main.cpp

Trie.o: Truple.cpp Truple.h
	g++ -g -c Truple.cpp

MinHeap.o: MinHeap.cpp MinHeap.h
	g++ -g -c MinHeap.cpp

clean:
	rm -rf *.o prog3
