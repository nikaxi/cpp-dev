#include "Useful.h"
class Y {
    int i;
    X x;
    public:
    Y() { i=0;}
    void f(int ii) {i = ii;}
    int g() const { return i * x.read(); }
    void permute() { x.permute();}
    
};

int main() {
    Y y;
    y.f(47);
    y.permute();
}