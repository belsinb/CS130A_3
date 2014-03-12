//the minheap helper file
#ifndef MINHEAP_H
#define MINHEAP_H
#include "Truple.h"


class MinHeap{
public:
	//constructor
	MinHeap(int);
    //add function
    void insert(truple*);

    //remove function
    truple * pop();

    void printHeap();

private:
    void percDown(int);
    void percUp(int);
    //sets up the minheap as array of tries
    truple **mh; // <- is this ok??
    void swap(int, int);

    int l;

};


#endif
