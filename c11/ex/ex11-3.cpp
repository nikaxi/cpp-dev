// 测试引用的3个规则
#include <iostream>
using namespace std;

int main() {
    // int &a; 引用必须被初始化
    //const int &a=NULL;
    int x = 11;
    int &a =x; 
    cout << "a = " << a;
    cout << "引用了 NULL \n";
    int y= 12;
    a = y;
    cout << "a = " << a << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    const int& b = 15;
    cout << "b = " << b << endl;

    int ival = 1.01; //warn from double to int
    int &rval = ival;
    rval++;
    cout << "ival = " << rval << endl;
}