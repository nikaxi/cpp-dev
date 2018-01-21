#include "../require.h"
#include <string>
#include <iostream>


using namespace std;
class Dog {
    string nm;
    int refcount;
    Dog(const string& name):nm(name), refcount(1){
        cout << "Creating Dog: " << *this << endl;
    }

    Dog& operator=(const Dog&rv);
    public:
    static Dog* make(const string& name) {
        return new Dog(name);
    }
    Dog(const Dog& d):nm(d.nm + " copy"), refcount(1) {
        cout << "Dog copy-constructor: " << *this << endl;
    }

    ~Dog() {
        cout << "Deleting Dog: " << *this << endl;
    }


    void attach() {
        ++ refcount;
        cout << "Attached Dog: " << *this << endl;
    }
};
