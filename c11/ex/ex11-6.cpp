#include <iostream>
using namespace std;

void f(int**);

int main() {
    int i = 47;
    int *ip = &i;
    f(&ip);
}

void f(int **p) {
    cout << **p << endl;
}