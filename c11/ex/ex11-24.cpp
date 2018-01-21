#include <iostream>
using namespace std;

class A{
    public:
    A(double x):d(x) {}
    void print() { cout << " d = " << d << endl; }
    private:
    double d;
};

int main() {
    //double A::*pd = &A::d;
    void (A::*f)() = &A::print;  //初始化
    A a(1.0);
    A *p = &a;
    (a.*f)(); //注意函数指针必须括号包围
    (p->*f)();

}