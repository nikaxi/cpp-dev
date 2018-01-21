#include <iostream>
using namespace std;

class A{
    private:
    int a;
    public:
    A(int x):a(x) { cout << "A()\n";}
};

A foo(int x) {
    return A(x);
}

void bar(A const& a) {

}

// A() 被调用两次 两次都是在foo(5) 中被调用的
int main() {
    A a = foo(5);
    bar(foo(5)); //初始化引用的，常量型指针
    // bar(a);
}