#include <iostream>
#include "MinHeap.h"
#include "math.h"

using namespace std;

MinHeap::MinHeap(int x) {
    l = 0;
    for(int k=0;k<(x+1);k++)
    {
        mh[k]=NULL;
    }
    mh[0] = 0;
}

void MinHeap::insert(Trie *t) {
    l++; //increment length
    mh[l] = t; //insert at the last node in heap
    //percolate up
    
    percUp(l);
    
}

void MinHeap::percUp(int i){
    if (i > 1 && l > 1) {
        int parent_index = ((i-i%2)/2);
        if (mh[i]->getWeight() < mh[parent_index]->getWeight()) {
            swap(i, parent_index);
            percUp(parent_index);
        }
    }
}

Truple * MinHeap::pop(){
    truple *tmp = NULL;
    if(l>0)
    {
        tmp = mh[1]; //put root in tmp truple to return the value
        mh[1]=mh[l]; //put the last node value in the root
        mh[l] = NULL;
        l--;           //decrement the length
        percDown(1);
    }
    return tmp;
}

void MinHeap::percDown(int i){
    int left = (2*i);
    int right = ((2*i)+1);
    if(right <= l)
    {
        if((mh[left]->getWeight() < mh[right]->getWeight()) && (mh[i]->getWeight() > mh[left]->getWeight()))
        {
            swap(left, i);
            percDown(left);
        }
        
        if((mh[left]->getWeight() >= mh[right]->getWeight()) && (mh[i]->getWeight() > mh[right]->getWeight()))
        {
            swap(right, i);
            percDown(right);
        }
    }
    else if(left <= l)
    {
        if(mh[i]->getWeight() > mh[left]->getWeight())
        {
            swap(left, i);
        }
        
    }
    
}

void MinHeap::swap(int x, int y) {
    Truple* tmp;
    //temp pointer takes x's value
    tmp = mh[x];
    //x takes y's value
    mh[x] = mh[y];
    //y takes temp's value AKA x's old value
    mh[y] = tmp;
}

int MinHeap::length() {
    
    return l;
}
