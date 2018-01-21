#include <iostream>
using namespace std;

class Simple2 {
    public:
    int f(float) const { return 1;}
    char f(char x) const { return x;}
};

int main() {
    int (Simple2::*fp)(float) const = &Simple2::f;
    char (Simple2::*fp2)(char ) const = &Simple2::f;
    Simple2 s2;
    cout << (s2.*fp)(3.5);
    cout << "\n";
    cout << (s2.*fp2)('A');
    cout << "\n";
}