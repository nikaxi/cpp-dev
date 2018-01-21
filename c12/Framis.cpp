#include <cstddef>
#include <fstream>
#include <iostream>
#include <new>

using namespace std;


ofstream out("Framis.txt");

class Framis {
    enum { sz = 10 };
    char c[sz];
    static unsigned char pool[];
    static bool alloc_map[];
    public:
    enum { psize = 100 };
    Framis() { out << "Framis()\n"; }
    ~Framis() { out << "~Framis() .... ";}
    void* operator new(size_t) throw(bad_alloc);
    void operator delete(void *);
};

// 静态成员变量的定义
unsigned char Framis::pool[psize * sizeof(Framis)];
bool Framis::alloc_map[psize] = {false};

void* Framis::operator new(size_t) throw(bad_alloc) {
    for(int i = 0; i < psize; i++) {
        if (!alloc_map[i]) {
            out << "using block " << i << " ... ";
            alloc_map[i] = true;
            return pool + (i * sizeof(Framis));
        }
    }
    out << "out of memory" << endl;
    throw bad_alloc();
}

void Framis::operator delete(void *m) {
    if(!m) return;
    unsigned long block = (unsigned long)m - (unsigned long)pool;
    block /= sizeof(Framis);
    out << " freeing block " << block << endl;
    alloc_map[block] = false;
}

int main() {
    Framis * f[Framis::psize];
    try {
        for(int i = 0; i < Framis::psize; i++) 
            f[i] = new Framis;
        new Framis;
        } catch(bad_alloc) {
            cerr << "out of memory!" ;
        }
        delete f[10];
        f[10] = 0;
        Framis* x = new Framis;
        delete x;
        for(int j = 0; j < Framis::psize; j++)
            delete f[j];
}

