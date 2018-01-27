#include <iostream>

using namespace std;

class Object {
	void * data;
	const int size;
	const char id;
	public:
	Object(int sz, char c) : size(sz), id(c) {
		data = new char[size];
		cout << "Constructing object " << id
		     << ", size = " << size << endl;
	}

	~Object() {
		cout << "Destructing object " << id << endl;
		delete []data;
	}
};

int main() {
	Object* a = new Object(40, 'a');
	delete a;
	void * b = new Object(40, 'b');
	delete b;
}
