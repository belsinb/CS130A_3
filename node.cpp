
#include "node.h"

	int node::getRank() {
		return rank;
	}

	/*int node::z() {
		return z;
	}*/

	int node::p() {
		return p;
	}

	node::node() {
		p = -1;
		rank = 0;
	}
