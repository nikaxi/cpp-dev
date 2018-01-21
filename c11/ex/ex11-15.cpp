// 自动拷贝构造

#include <iostream>
using namespace std;

class A{
    public:
    A(){ cout << "Call A()\n"; }
    A(A&b){ cout << "Call A(A&)\n";}
    ~A() { cout << "Call ~A()\n";}
};

class B{
    private:
    int a;
    A b;
    public:
    B(){cout << "Call B() \n";}
    //B(B&) { cout << "Call B(B&)\n";}
    ~B() { cout << "Call ~B()\n";}
};

int main() {
    B b;
    cout << "-------\n";
    B c(b); // 1 在B的默认拷贝构造下，调用了A的拷贝构造, 而不是默认构造函数
            //   在定义B的拷贝构造后，调用了A的默认构造
}