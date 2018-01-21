#include <iostream>
using namespace std;

void f(int ** const& p) {
    **p += 1;
    cout << **p << endl;
}

void f(int** & p) {
    **p+=1;
    cout << **p << endl;
}

int main() {
    int i= 48;
    int *p = &i;
    int** const & ref = &p; //为什么一定要const 才可以呢
    int **p2 = &p;
    int** &ref2 = p2;
    f(ref);
    f(ref2);
}