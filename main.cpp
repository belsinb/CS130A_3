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

	void union(int *, int, int);
	int find(int *, int);



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
        int input[1200]; //why not n*3?
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
        // why not create a truple and add it to the min heap?
        for(k=0;k<(edge_num*3);k+=3)
        {
            getline(cin, input);

            stringstream ss(input);

            ss >> i1, i2, i3;

            input[k] = i1;
            input[k+1] = i2;
            input[k+2] = i3;
        }


		int *x = new int[n](-1); //initalize our array

		return 0;
	}

//=======================================================================================

	void union(int *x, int a, int b) {
		// find the roots of a and b
        int aRoot = find(a);
		int bRoot = find(b);

		if (aRoot == bRoot)
			return; //a and b are already in the same set

        // set the smaller root to the bigger one and add their sizes
		if (x[aRoot] < x[bRoot]) {
            x[aRoot] += x[bRoot];
            x[bRoot] = aRoot;
        }
        else {
            x[bRoot] += x[aRoot];
            x[aRoot] = bRoot;
        }
}

    int find(int *x, int a) {
        if (x[a] < 1)
            return a; //we found the root!
        return x[a] = find(x, x[a]); //recursive path compression
    }

