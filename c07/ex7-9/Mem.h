#ifndef MEM_H
#define MEM_H
typedef unsigned char byte;

class Mem {
	byte* buf;
	int size;
	void insureMinSize(int minSize);
	public:
	Mem();
	Mem(int sz);
	~Mem();
	byte* pointer();
	byte* pointer(int sz);
	int msize() { return size;}
};
#endif
