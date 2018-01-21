#include <iostream>
using namespace std;

class Outer {
	class Inner {
		static int i; //OK
	};
};


int Outer::Inner::i = 47;

void f() {
	class Local {
		public:
			//static int f; 局部类里不能有静态成员
		  int i;

	}x;
}

int main() {
	Outer x;
	f();
}
