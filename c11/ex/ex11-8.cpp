#include <iostream>
using namespace std;

// 看不出来是需要改变 参数的
void f(char &a) {
    a+=1;
}

int main() {
    char x='a';
    cout << x << endl;
    f(x);  // 改变参数?
    cout << "change a \n";
    cout << x << endl;
}

