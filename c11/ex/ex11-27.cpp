#include <iostream>
#include <vector>
using namespace std;

#define DF(N) void N() { \
    cout << "function " #N " called ..." << endl; }

DF(a);
DF(b);
DF(c);
DF(d);
DF(e);
DF(f);
DF(g);

class FuncTable {
    private:
    vector<void(*)()> func_vec;
    public:
    FuncTable(){ 
    }
    void add(void(*f)()){ func_vec.push_back(f);};
    void remove(void(*f)()){ 
        for( vector<void(*)()>::iterator begin = func_vec.begin();
            begin != func_vec.end(); begin++) {
                if (f == *begin) {
                    func_vec.erase(begin);
                    break;
                }
            }
        
    }
    void run(const char& c);
};

void FuncTable::run(const char& c) {
    if (c >= 'a' && c <= 'g') {
      func_vec.at(c-'a')();  
    }
}

int main() {
    FuncTable fb;
    fb.add(a);
    fb.add(b);
    fb.add(c);
    fb.add(d);
    fb.add(e);
    fb.add(f);
    fb.add(g);

    while(1){
        char c, cr;
        cout << "press a key from 'a' to 'g' or 'q' to quit" <<endl;
        cin.get(c); cin.get(cr);
        if (c == 'q') break;
        fb.run(c);
    }
}
