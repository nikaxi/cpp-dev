#include <iostream>
using namespace std;

int global;
//函数声明
void func();

int main(){
	global = 12;
	cout << global << endl;
	func();
	cout << global << endl;
}
	
