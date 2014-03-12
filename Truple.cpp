#include <iostream>
#include "Truple.h"

//did I do this right??
truple::truple()
{
    to = -5;
    from = -5;
    weight = -5;
}

//did I do this right??
truple::truple(int t, int f, int w)
{
    setTo(t);
    setFrom(f);
    setWeight(w);
}

int truple::getTo()
{
    return to;
}

int truple::getFrom()
{
    return from;
}

int truple::getWeight()
{
    return weight;
}


void truple::setTo(int x)
{
    to = x;
}

void truple::setFrom(int x)
{
    from = x;
}

void truple::setWeight(int x)
{
    weight = x;
}

bool truple::isLessThan(truple *t) {
    if (weight < t->getWeight())
        return true;
    else
        return false;
    // else if (weight == t->getWeight() && (int)c < (int)t->getWeight())
    //     return true;
}

void truple::print() {
    cout << "(" << to << "," << from << "," << weight << ")";
}
