#include <iostream>
#include <Truple.h>

//did I do this right??
truple::truple()
{
    t = -5;
    f = -5;
    w = -5;
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
    if (f < t->getWeight())
        return true;
    else if (f == t->getWeight() && (int)c < (int)t->getWeight())
        return true;
    else
        return false;
}