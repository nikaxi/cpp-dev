#include "Stash3.h"
#include <iostream>
#include <cassert>

using namespace std;
const int increase = 100; // 这里设置为20就 TestStash无法工作
Stash::Stash(int sz){
	size  = sz;
	quantity = 0;
	next = 0;
	storage = 0;
}

Stash::Stash(int sz, int quantity) {
	size = sz;
	next = 0;
	quantity = quantity;
	storage = 0;
	inflate(quantity);
}

Stash::~Stash() {
	if (storage != 0){
		delete []storage;
//		cout << "~Stash().....\n";
	}
}


void Stash::inflate(int increase) {
	int newSize = (quantity + increase) * size;
	unsigned char* p = new unsigned char[newSize];
	for(int i = 0; i < quantity*size; i++)
		p[i] = storage[i];
	delete []storage;
	quantity = newSize;
	storage = p;
}

int Stash::count(){
	return next;
}
int Stash::add(void* element) {
	if (next >= quantity) {
		inflate(increase);
	}
	unsigned char* e = (unsigned char*)element;
	for (int i = 0; i < size; i++) 
		storage[next*size +i ] = e[i];
	next++;
	return (next-1);
}

void* Stash::fetch(int index) {
	assert(index > -1);
	if (next==0|| index >= next) return 0; 
	return &(storage[index*size]);
}
