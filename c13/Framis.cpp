#include <cstddef>
#include <fstream>
#include <iostream>
#include <new>

using namespace std;

ofstream out("Framis.out");


class Framis {

		enum { sz = 10};
		char c[sz];
		static unsigned char pool[];
		static bool alloc_map[];
		public:
		enum { psize = 100 };
		Framis() { out << "Framis()\n"; }
		~Framis() { out << " ~Framis() .... "; }
		void* operator new(size_t) throw(bad_alloc);
		void operator delete(void*);
};

unsigned char Framis::pool[psize * sizeof(Framis)];
bool  Framis::alloc_map[psize] = { false};

void* Framis::operator new(size_t) throw(bad_alloc) {
		for(int i = 0; i < psize; i++) 
				if(!alloc_map[i]) {
						out << " using block " << i << " ... ";
						alloc_map[i] = true;
						return pool + (i * sizeof(Framis));
				}
		out << " out of memory" << endl;
		throw bad_alloc();
}
