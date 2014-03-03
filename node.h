
class node {
private:
	int rank;
	//int z; //node number
	int p; //parent
public:
	node() = default;
	int getRank();
	//int z(); //get node number
	int p(); // get parent
};
