#ifndef TRUPLE_H
#define TRUPLE_H

using namespace std;


class truple {
public:
    //int parse;
    int getTo();
    int getFrom();
    int getWeight();
    void setTo(int);
    void setFrom(int);
    void setWeight(int);
    bool isLessThant(truple*);
    truple(); //= default;  <-2 syntax warnings:
              //"invalid pure specifier (only '=0' is allowed) before ';' token
              //"initializer specified for non-virtual method 'truple::truple()'
    truple(int t, int f, int w);
    
private:
    int to;
    int from;
    int weight;
    
};


#endif
