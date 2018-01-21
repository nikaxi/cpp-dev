#include <cstddef>
#include <fstream>
#include <iostream>
#include <new>

using namespace std;


ofstream out("Framis.cpp");

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


unsigned char Framis::pool[psize * sizeof(Framis)];
bool Framis::alloc_map[psize] = {false};
