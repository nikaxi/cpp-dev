#include <iostream>
class X;
class X {
    X(X&){}
    public:
    X() {}
    X clone() const {
        return *(new X());
    };
};

X f(X const& x) {
    X b = x.clone();
}

int main () {
    X x1;
    f(x1);
}

