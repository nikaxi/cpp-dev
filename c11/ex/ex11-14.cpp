#include <iostream>
using namespace std;

void f(int n) {
    if (n == 0)
    return;
    else {
    f(--n);
    cout << "n = " << n << endl;
    }
}

int main() {
    f(5);
}