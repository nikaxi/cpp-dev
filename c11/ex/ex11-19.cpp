#include <iostream>
using namespace std;

class A{
    public:
    A() {cout <<"A()\n";}
    A(A&) { cout << "A(A&)\n";}
};

class B{
    private:
    A a;
    public:
    B(){ cout << "call B()\n";}
};

int main() {
    B b;
    cout << "------\n";
    B c(b); //调用B的自动拷贝构造，然后对A进行按值拷贝，发现A有拷贝构造不按位拷贝，按照拷贝构造进行
}