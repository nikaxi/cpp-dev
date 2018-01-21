#include <iostream>
using namespace std;

class A{
    public:
    A() { cout << "call A()\n";}
    A(A&) { cout << "call A(&)\n";}
};

void f(A a) {

}

int main() {
    A a;
    f(a);
}