//the main code yo.
#include <iostream>
#include <string>
#include <cstdio>
#include "minheap.h"
#include "node.h"

using namespace std;



	void union(int, int);
	int find(int);


int main()
	{
		int n = 1;
        int k = -5;
        int edge_num;
        int j;
        
        
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
        for(k=0;k<edge_num;k++)
        {
            //cin >> a new node each time somehow
        }
        
        
		//get n (the number of nodes) from stdin

		//node *x = new node[n]();

		return 0;
	}


    

	void union(int* x, int a, int b) {
		aRoot = find(a);
		bRoot = find(b);
		if (aRoot == bRoot)
			return; //a and b are already in the same set

		// ...
}
