#include <iostream>

using namespace std;

class Counted {
		int id;
		static int count;
		public:
		Counted():id(count++) {
				cout << "it is being created " 
					 << id << endl;
		}
		~Counted() {
				cout << "it is being destroyed " 
					 << id << endl;
		}
};

int Counted::count = 0;
int main() {
		Counted c1;
		Counted c2;
		for(int i=0; i<10; i++) {
				Counted c3;
		}
}

