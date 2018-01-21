#include <iostream>
using namespace std;


class A {
    public:
    A() { cout << "A() constructor\n";}
    void foo() const { cout << "foo() is const\n";}
    void bar() { cout << "bar() is not const\n";}
};


void f(A a){
    a.foo();
    a.bar();
}

void b(A& a) {
    a.foo();
    a.bar();
}

void c(const A& a) {
    a.foo();
   // a.bar(); //只能调用const func
}
int main() {
    A a;

    f(a);
    b(a);
    c(a);
}