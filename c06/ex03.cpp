#include <iostream>
using namespace std;

class Simple {
	int x;
	public:
	Simple(int _x) { x = _x; }
	Simple(){ cout << " Simple constructor called\n";}
	~Simple() { cout << x <<" Simple Destructor called\n";}
};

int main() {
	Simple x(5);
}
