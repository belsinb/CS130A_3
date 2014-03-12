# Belsin Barkhosir
# Evan Moelter
# CS130A, Winter 2014, El Abbadi

all: prog3

prog3: sbSocialSpan.o Truple.o minheap.o
	g++ -g sbSocialSpan.o Truple.o minheap.o -o prog3

sbSocialSpan.o: sbSocialSpan.cpp
	g++ -g -c sbSocialSpan.cpp

Truple.o: Truple.cpp Truple.h
	g++ -g -c Truple.cpp

minheap.o: minheap.cpp minheap.h
	g++ -g -c minheap.cpp

clean:
	rm -rf *.o prog3
