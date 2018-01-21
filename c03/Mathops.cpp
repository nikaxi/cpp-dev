#include <iostream>
using namespace std;

#define PRINT(STR, VAR) \
	cout << STR " = " << VAR << endl

int main() {
	int i = 5;
	int j = 10;
	int total = i +j ; PRINT("i+j", total);
}

