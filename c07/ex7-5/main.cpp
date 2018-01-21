#include <iostream>
#include <string>
using namespace std;
// 占位符号， 只有类型没标识，调用的时候，必须传递值，但是不用这个值
// 没法引用
void func(int arg1, std::string){
	cout << arg1 << endl;
}

int main() {
	func(5, "");
	func(50, "sdfasdfasdfasdf");
}
