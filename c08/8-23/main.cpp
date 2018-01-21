#include <iostream>
using namespace std;

class A {
	public:
		void echo(int a) const;
		void echo2();
};

void A::echo(int a=0) const {
	cout << "const echo()" << endl;
	echo2();  // 调用非const 方法
}

void A::echo2() {
	cout << "echo()" << endl;
}

int main() {
	A a;
	a.echo2(); //会选择非const成员函数
	a.echo();
	//const A b;
	//b.echo2(); // 选择的是const成员函数
}

//const成员函数 可以被const对象调用，也可以被非const对象调用
//const对象只能调用const函数，并且这个函数内部必须没有非const的函数调用
//const函数算重载函数，并且声明与定义必须都要带上const修饰符

