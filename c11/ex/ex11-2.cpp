#include <iostream>
using namespace std;

int main() {
    int y;
    int &r = y;
    const int& q = 12; //常量引用
    int x = 0;
    int &a = x;
    cout << "x = " << x << " a= " << a << endl;
    a++;
    cout << "对引用操作 a++后\n";
    cout << "x = " << x << " a= " << a << endl;
}

