//the main code yo.
#include <iostream>
#include <sstream>
#include <string>
#include <cstdio>
#include "minheap.h"
#include "node.h"
#include "Truple.h"

using namespace std;




	void union(int *, int, int);
	int find(int *, int);




//=======================================MAIN LOOP======================================


int main()
	{
        int i1, i2, i3;

		int n = 1;
        int k = -5;
        int edge_num;
        
        
        
        string input;

        //recieve number of nodes from user
        cin >> n;
        //create array of disjoint sets
        /*int sets[n+1]
        for(k=0;k<n;k++)
        {
            if(k=0)
                sets[k] = -2;
            else
                sets[k] = -1;
        }*/
        int *sets = new int[n](-1); //initalize our array
        sets[0] = 0;

        //recieve number of edges from user
        cin >> edge_num;
        
        //TODO: initialize minHeap mh = new minHeap(n)
        //initialize MinHeap
        MinHeap *ah = new MinHeap(edge_num);//we initliaze with number of edges and not number of nodes, correct?

        
        //get the truples into an array called input with k = to, k+1 = from, k+2 = weight
        // why not create a truple and add it to the min heap?
        for(k=0;k<edge_num;k++)
        {
            getline(cin, input);

            stringstream ss(input);

            ss >> i1, i2, i3;

            ah->insert(new truple(i1, i2, i3));

        }



        // pop out truple from minheap
        for(k=1;k<edge_num;k++) {
            truple *t = ah->pop();
            union(sets, t->getTo(), t->getFrom());

        }


		return 0;
	}

//=======================================================================================

	void union(int *x, int a, int b) {
		// find the roots of a and b
        int aRoot = find(a);
		int bRoot = find(b);

		if (aRoot > 0 && aRoot == bRoot)
			return; //a and b are already in the same set

        // set the smaller root to the bigger one and add their sizes
		if (x[aRoot] <= x[bRoot]) {
            x[aRoot] += x[bRoot];
            x[bRoot] = aRoot;
        }
        else {
            x[bRoot] += x[aRoot];
            x[aRoot] = bRoot;
        }
        cout << a << " " << b << endl;

}

    int find(int *x, int a) {
        if (x[a] < 1)
            return a; //we found the root!
        return x[a] = find(x, x[a]); //recursive path compression
    }

