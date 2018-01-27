#include "../require.h"
#include <cstdlib>
#include <cstring>
#include <iostream>


using namespace std;

class Obj {
	int i, j, k;
	enum { sz = 100 };
	char buf[sz];
	public:
	void initialize() {
		cout << "initializing Obj" << endl;
		i = j = k = 0;
		memset(buf, 0, sz);
	}
	void destroy() const {
		cout << "destroying Obj" << endl;	
	}

};

int main() {
	Obj* obj = (Obj*)malloc(sizeof(Obj));
	require(obj != 0);
	obj->initialize();
	obj->destroy();
	free(obj);
}

