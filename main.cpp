//the main code yo.
#include <string>
#include <iostream>
#include <cstdio>
#include "minheap.h"
#include "node.h"

	void union(int, int);
	int find(int);

	void main()
	{
		int n = 1;
		//get n (the number of nodes) from stdin

		node *x = new node[n]();

		return;
	}

	void union(int* x, int a, int b) {
		aRoot = find(a);
		bRoot = find(b);
		if (aRoot == bRoot)
			return; //a and b are already in the same set

		// ...
}
