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
    
    
private:
    void percDown(int);
    void percUp(int, char);
    //sets up the minheap as array of tries
    truple *mh[1200/*how do we get edge_num in here?*/]; // <- is this ok??
    void swap(int, int);
    
    int l;
    
};


#endif