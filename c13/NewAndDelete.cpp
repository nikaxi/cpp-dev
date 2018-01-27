#include "Tree.h"
using namespace std;

int main() {
	Tree* t = new Tree(12);
	cout << t;
	delete t;
}
