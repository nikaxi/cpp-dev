#include <iostream>
using namespace std;

class A {
    public:
    A(){}
    A(A&) { cout << "Call A(&A)\n";}
};


int main() {
    A a; 
    // A b=a;
}