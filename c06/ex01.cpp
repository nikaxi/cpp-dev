#include <iostream>
using namespace std;

class Simple {
	int x;
	public:
	Simple(){ cout << "Simple constructor called\n";}
	~Simple() { cout << "Simple Destructor called\n";}
};

int main() {
	Simple x;
}
