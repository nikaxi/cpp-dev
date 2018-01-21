// 创建一个类
#include <iostream>
using namespace std;
class A {
    public:
    void foo()const { cout << "foo()\n";}
    void bar()const { cout << "bar()\n";}
    void fb() {cout << "fb()\n";}
};
// 创建一个函数 引用类对象
void f(const A* p) {    
    p->foo();
    p->bar();
    // p->fb();
}
// 创建一个函数 指针指向类对象

void f(const A& r) {
    r.foo();
    r.bar();
    // r.fb();
}


int main() {
    const A a;
    
    f(&a);
    f(a);
}
