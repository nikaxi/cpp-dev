#include <iostream>


using namespace std;

int main() {
	char c;
	while((c = cin.get()) != 'q') {
		if (c != '\n'){
			// 输出到cout 修改下输出到网络上
			cout << c;
		}
	}
}
