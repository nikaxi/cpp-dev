#include <iostream>
using namespace std;

void echoArray(double a[]);

int main(){
	double a[] = {0.1, 4.3, 2.1};
	double b[] = {0.1, 4.3, 2.1, 4.5, 6.7};
	echoArray(a);
	echoArray(b);

}


void echoArray(double a[]) {
	cout << "sizeof " << sizeof(a)/sizeof(double) << endl;
}


