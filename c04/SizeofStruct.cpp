#include <iostream>
#include <iostream>
using namespace std;


struct A {
	int a[100];
};

struct B {  //任何对象至少有一个字节的空间大小
	void f();
};

void B::f(){}


int main() {
	cout << "size of A: " << sizeof(A) << " bytes" << endl;
	cout << "size of B: " << sizeof(B) << " bytes" << endl;
}

