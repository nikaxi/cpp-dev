#include <iostream>
using namespace std;

// 好手法！！！
class Widget {
    void f(int) const { cout << "Widget::f()\n";}
    void g(int) const { cout << "Widget::g()\n";}
    void h(int) const { cout << "Widget::h()\n";}
    void i(int) const { cout << "Widget::i()\n";}
    enum { cnt = 4};
    void (Widget::*fptr[cnt])(int) const;
    public:
    Widget() {
        fptr[0] = &Widget::f;
        fptr[1] = &Widget::g;
        fptr[2] = &Widget::h;
        fptr[3] = &Widget::i;
    }

    void select(int i, int j) {
        if (i < 0 || i > cnt) return;
        (this->*fptr[i])(j);
    }

    // 可以控制函数的数量 ，也可以把指针数组封装为一个map 来实现按照关键字索引行为，而不是索引
    int count() { return cnt; }
};

int main() {
    Widget w;
    for(int i= 0; i< w.count(); i++) {
        w.select(i, 47);
    }
}