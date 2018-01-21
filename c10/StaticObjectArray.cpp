#include <iostream>
using namespace std;

class X {
	int i;
	public:
	X(int ii):i(ii){}
};


class Stat {
	static float fz;
	static const int sz = 100; //内置类型是允许的
	static X x2;
	static X xTable2[];
	static const X x3;
	static const X xTable3[];

	public:
	void echo() {
		cout << fz << endl;
	}
};

X Stat::x2(100);

X Stat::xTable2[] = {X(1), X(2), X(3), X(4)};

const X Stat::x3(100);
const X Stat::xTable3[] = {
	X(1), X(2), X(3), X(4)
};

float Stat::fz = 1.3;

int main() { Stat v;
	v.echo();
}
