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


Truple * MinHeap::pop(){
    truple *tmp = NULL;
    if(l>0)
    {
        tmp = mh[1]; //put root in tmp truple to return the value
        mh[1]=mh[l]; //put the last node value in the root
        mh[l] = NULL;
        l--;           //decrement the length
        perDown(1);
    }
    return tmp;
}

void MinHeap::percDown(int i){
    int left = (2*i);
    int right = ((2*i)+1);
    if(right <= l)
    {
        if((mh[left]->getWeight() < mh[right]->getF()) && (mh[i]->getF() > mh[left]->getF()))
        {
            swap(left, i);
            percDown(left);
        }
        
        if((mh[left]->getF() >= mh[right]->getF()) && (mh[i]->getF() > mh[right]->getF()))
        {
            swap(right, i);
            percDown(right);
        }
    }
    else if(left <= l)
    {
        if(mh[i]->getF() > mh[left]->getF())
        {
            swap(left, i);
        }
        
    }
    
}