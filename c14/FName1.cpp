#include "../require.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FName1 {
    ifstream file;
    string fileName;
    bool named;
    public:
    FName1():named(false) {}
    FName1(const string& fname):fileName(fname), file(fname.c_str()) {
        assure(file, fileName.c_str());
        named = true;
    } 

    string name() const { return fileName; }
    void name(const string& newName) {
        if(named) return;
        fileName = newName;
        named = true;
    }
    operator ifstream&() { return file;}
};


int main() {
    FName1 file("FName1.cpp");
    cout << file.name() << endl;
    //file.close(); // ifstream close;
}