#include <iostream>

using namespace std;

int main() {
    // 其它类型转char
	char a = 0xFF41;
	cout << a<< endl;
	char b = 62.45;
	cout << b << endl;
	// char转 其它类型
	int i = 'A';
	cout << i << endl;

	i = '2' + '3';
	cout << i << endl;
	int j = 2 + 'a';
	cout << j << "is the ascii for character " << static_cast<char>(j) << endl;

}
