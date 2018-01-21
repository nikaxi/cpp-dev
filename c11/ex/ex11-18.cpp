#include <iostream>
using namespace std;


class D {
    public:
    D(){}
    D(D& d, int a=10){ cout << "D(D&)\n" << "a = " << a << endl;} // 有默认拷贝，就不会自动生成默认构造函数
};

int main() {
    D d;
    D d2(d);
}