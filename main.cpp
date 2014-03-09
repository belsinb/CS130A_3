//the main code yo.
#include <iostream>
#include <sstream>
#include <string>
#include <cstdio>
#include "minheap.h"
#include "node.h"

using namespace std;


class truple {
public:
    int parse;
    int getTo;
    int getFrom;
    int getWeight;
    void setTo;
    void setFrom;
    void setWeight;
private:
    int to;
    int from;
    int weight;

};

	void union(int, int);
	int find(int);



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

//=======================================MAIN LOOP======================================


int main()
	{
        int i1, i2, i3;
        
		int n = 1;
        int k = -5;
        int edge_num;
        int j;
        int input[1200];
        string input;
        
        //recieve number of nodes from user
        cin >> n;
        //create array of disjoint sets
        int sets[n+1]
        for(k=0;k<n;k++)
        {
            if(k=0)
                sets[k] = -2;
            else
                sets[k] = -1;
        }
        
        //recieve number of edges from user
        cin >> edge_num;
        
        //get the truples into an array called input with k = to, k+1 = from, k+2 = weight
        for(k=0;k<edge_num;k+=3)
        {
            getline(cin, input);
            
            stringstream ss(input);
            
            ss >> i1, i2, i3;
            
            input[k] = i1;
            input[k+1] = i2;
            input[k+2] = i3;
        }
        
        //make new node from each array
		//get n (the number of nodes) from stdin

		//node *x = new node[n]();

		return 0;
	}

//=======================================================================================
    

	void union(int* x, int a, int b) {
		aRoot = find(a);
		bRoot = find(b);
		if (aRoot == bRoot)
			return; //a and b are already in the same set

		// ...
}



