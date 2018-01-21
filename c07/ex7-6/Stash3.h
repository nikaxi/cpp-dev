#ifndef STASH3_H
#define STASH3_H

class Stash {
	int size;
	int quantity;
	int next;
	unsigned char* storage;
	void inflate(int increase);
	public:
	Stash(int size);
	Stash(int size, int quantity);
	~Stash();
	int add(void* element);
	void* fetch(int index);
	int count();
};
#endif
