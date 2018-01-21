#include <iostream>
using namespace std;

class X{
	public:
	void echo() { cout << "call by static\n";}
	static void f( X & x) { x.echo(); } // 没法作为const成员函数
};


int main() {
	X x1;
	X x2;
	X::f(x1);
	X::f(x2);
	x2.f(x1);
}
