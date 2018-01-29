#include <fstream>
using namespace std;

ofstream out("order.out");

#define CLASS(ID) class ID { \
public: \
ID(int) { out << #ID " constructor\n"; } \
~ID() { out << #ID "destructor\n"; } \
};


CLASS(Base1);
CLASS(Member1);
CLASS(Member2);
CLASS(Member3);
CLASS(Member4);


class Derived1 : public Base1 {
    Member1 m1;
    Member2 m2;
    public:
    Derived1(int): m1(1), m2(2), Base1(3) {
        out << "Derived1 constructor\n";
    }
    ~Derived1() {
        out << "Derived1 destructor\n";
    }
};

class Derived2 : public Derived1 {
    Member3 m3;
    Member4 m4;
    public:
    Derived2() :m3(1), Derived1(2), m4(3) {
        out << "Derived2 constructor\n";
    }
    ~Derived2(){
        out << "Deriverd2 destructor\n";
    }

};


int main() {
    Derived2 d2;
}