#include <iostream>
using namespace std;


class A {
	public:
	void f(int x, int y=0, int z=0, int w=0) {
		cout << x+y+z+w << endl;
	}
};


int main() {
	A a;
	a.f(1);
	a.f(1,2);
	a.f(1,2,3);
	a.f(1,2,3,4);
}
