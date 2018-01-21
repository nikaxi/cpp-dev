#include <iostream>
using namespace std;

class FuncTable {
    private:
    void a() { cout << "a func() called .....\n";}
    void b() { cout << "b func() called .....\n";}
    void c() { cout << "c func() called .....\n";}
    void d() { cout << "d func() called .....\n";}
    void e() { cout << "e func() called .....\n";}
    void f() { cout << "f func() called .....\n";}
    void g() { cout << "g func() called .....\n";}
    enum { cnt = 7 };
    void (FuncTable::*fp[cnt])();
    public:
    FuncTable(){
        fp[0] = &FuncTable::a;
        fp[1] = &FuncTable::b;
        fp[2] = &FuncTable::c;
        fp[3] = &FuncTable::d;
        fp[4] = &FuncTable::e;
        fp[5] = &FuncTable::f;
        fp[6] = &FuncTable::g;
    }
    void run(int i){
        (this->*fp[i])();
    };
};

int main() {
    FuncTable fb;
       char c, cr;
       while(1){
        cout << "press a key from 'a' to 'g' or 'q' to quit" <<endl;
        cin.get(c); cin.get(cr);
        if (c == 'q') break;
        int i = c-'a';
        fb.run(i);
        }
}