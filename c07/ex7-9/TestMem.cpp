#include "Mem.h"
#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;

class MyString {
	Mem* buf;
	public:
	MyString();
	MyString(char* str);
	void concat(char* str);
	void print();
};

MyString::MyString(){
	buf = 0;
}

MyString::MyString(char* str) {
	buf = new Mem(strlen(str)+1);
	strcpy((char*)buf->pointer(), str);
}

void MyString::print(){
	if (buf != 0) {
		cout << (char*)buf->pointer() << endl;
	}
	else
		return;
}

void MyString::concat(char* str) {
	int newSize = buf->msize()+strlen(str)+1;
	Mem* p = new Mem(newSize);
	memcpy(p->pointer(), buf->pointer(), buf->msize());
	strcat((char*)p->pointer(), str);
	delete buf;
	buf = p;
}

int main() {
	MyString s1;
	s1.print();
	MyString s2("hello world!");
	s2.print();
	s2.concat(" end!!!");
	s2.print();

}
