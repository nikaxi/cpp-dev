#include <iostream>
using namespace std;

void increment(int* & i) { i++; }

int main() {
    int f  = 5;
    int* i = &f;
    cout << "i = " << i << endl;
    increment(i);
    cout << "i = " << i << endl;
    return 0;
}