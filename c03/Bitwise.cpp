#include <iostream>
using namespace std;

unsigned char ror(unsigned char);
unsigned char rol(unsigned char);

int main() {
	char a = 'a';
	char ret = ror(a);
	cout << ret << endl;
	ret = rol(ret);
	cout << ret << endl;
}
