#include "Mem.h"
#include <cstring>
using namespace std;

Mem::Mem(){
	size = 0;
	buf = 0;
}

Mem::Mem(int sz) {
	buf = 0; //没有被初始化过的指针不能被delete
	size = 0;
	insureMinSize(sz);
}

byte* Mem::pointer(){
	return buf;
}

byte* Mem::pointer(int sz) {
	insureMinSize(sz);
	return buf;
}

Mem::~Mem(){
	if (buf != 0)
		delete []buf;
}
void Mem::insureMinSize(int sz) {
	if (size < sz) {
		byte* p = new byte[sz];
		memset(p+size, 0, sz-size);
	    memcpy(p, buf, size);
	    delete []buf;
		buf = p;
		size = sz;
	}
}
