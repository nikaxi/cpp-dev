#include <iostream>
using namespace std;

const int i = 100;
const int j = i + 100;

long address = (long)&j;
char buf[j+10];

int main() {
	cout << "Enter a character & CR:";
	char c = cin.get();
	const char c2 = c+ 'a';
	cout << (char)c2 << endl;
}
