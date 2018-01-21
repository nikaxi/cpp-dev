#include <iostream>
using namespace std;

void echo(char a[], int n) {
    cout << a[n]; 
    if (n == 0) {
        return;
    }
    else {
        echo(a, n-1);
    }
}

int main() {
    char a[] = "hello  world";
    echo(a, sizeof(a)/sizeof(char) -1);
    cout << "\n";
}