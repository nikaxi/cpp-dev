#include <iostream>
using namespace std;
class A {
    public:
    A(){ cout <<" A()\n";}
    A(A&) { cout << "A(A&)\n";}
};
void f(A a) {

} 

A b(A& b) {
    return b;
}

int main(){
    A a;
    f(a);
    b(a);
}