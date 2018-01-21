#include <iostream>
using namespace std;
int change_point(int *p){
    *p = 5;
    return *p;
}

int main() {

    int x = 1;
    cout << "x = " << x << endl;
    int ret = change_point(&x);
    cout << "after call change_point() x = " << x << endl;
    cout << "return value of change_point " << ret << endl;
}