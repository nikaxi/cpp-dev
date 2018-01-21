#include <iostream>
using namespace std;

class Data {
    public:
    int a, b, c;
    void print() const {
        cout << "a = " << a
             << "b = " << b
             << "c = " << c
             << endl;
    }
};


int main() {
    Data d, *dp = &d;
    int Data::*pmInt = &Data::a;
    dp->*pmInt = 47;  // 间接引用 成员指针
    pmInt = &Data::b; //不能直接对pmINt ++ 来改变指向目标

    d.*pmInt = 48;
    pmInt = &Data::c;
    dp->*pmInt = 49;
    dp->print();
}