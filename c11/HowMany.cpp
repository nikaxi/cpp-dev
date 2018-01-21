#include <fstream>
#include <string>

using namespace std;
ofstream out("HowMany.out");

class HowMany{
    static int objCount;
    public:
    HowMany(){ objCount++; }
    static void print(const string& msg = "") {
        if (msg.size() != 0) out << msg << ": ";
        out << "objCount = " << objCount << endl;
    }

    ~HowMany() {
        objCount--;
        print("~HowMany()");
    }
};

int HowMany::objCount = 0;

HowMany& f(HowMany& x ) {  // 参数是按值传递的，按照位来传递的，没有调用构造函数，但是对象已经构建了
                         // 实际是需要构造对象，而不是简单的位拷贝
                         // 程序里写的，跟编译器实际干的不一致
    x.print("x argument inside f()");
    return x;
}


int main() {
    HowMany h;
    HowMany::print("after construction of h");
    HowMany& h2 = f(h);
    HowMany::print("after call f()");
}