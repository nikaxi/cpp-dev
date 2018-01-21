#include <fstream>
#include <string>

using namespace std;
ofstream out("HowMany2.out");

class HowMany2{
    static int objCount;
    string name;
    public:
    HowMany2(const string& id=""):name(id){ objCount++; 
    print("HowMany2()");
    }
    HowMany2(const HowMany2& h2): name(h2.name) {
        name += " copy";
        ++ objCount;
        print("HowMany2(const Howmany2& )");
    }
    void print(const string& msg = "") const {
        if (msg.size() != 0) out << msg << ": ";
        out << "\t" << name << ": objCount = " << objCount << endl;
    }

    ~HowMany2() {
        objCount--;
        print("~HowMany()");
    }
};

int HowMany2::objCount = 0;

HowMany2 f(HowMany2 x ) {  // 参数是按值传递的，按照位来传递的，没有调用构造函数，但是对象已经构建了
                         // 实际是需要构造对象，而不是简单的位拷贝
                         // 程序里写的，跟编译器实际干的不一致
    x.print("x argument inside f()");
    out << "Returning from f()" << endl;
    return x;
}


int main() {
    HowMany2 h("h");
    out << "Entering f()" << endl;
    HowMany2 h2 = f(h);
    h2.print("h2 after call to f()");
    out << "Call f(), no return value" << endl;
    f(h);
    out << "After call f() " << endl;
}