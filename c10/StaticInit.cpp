#include <iostream>
using namespace std;

int x = 100;
class WithStaitc {
    static int x;
    static int y;
    public:
    void print() const {
        cout << "WithStatic::x = " << x << endl;
        cout << "WithStatic::y = " << y << endl;
    }
};

int WithStaitc::x = 1;
int WithStaitc::y = x + 1;

int main() {
    WithStaitc ws;
    ws.print();
}
