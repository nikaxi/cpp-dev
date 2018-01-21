#include <iostream>
using namespace std;
// 有成员是指针的 要小心析构函数, 构造几次，析构几次应该一样的

class D {
    private:
    double * p;
    public:
    D():p(new double(5.0)) { cout << "call D()\n";}
    D(D& d) { p = new double(*(d.p)); cout << "call D(D&)\n"; }
    ~D() { 
     cout << *p << endl;
     *p  = -1; 
     delete p; 
     p = nullptr;
     cout << "call ~D()\n";
    }
};

void f(D d) {

}

int main() {
    D d;
    f(d);
}