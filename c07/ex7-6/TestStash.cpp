#include "Stash3.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
	Stash intStash(sizeof(int));
	for(int i=0; i < 100; i++) 
		intStash.add(&i);
	for(int j=0; j < intStash.count(); j++){
		cout << "intStash.fetch("<<j<<") ="
			 <<*(int*)intStash.fetch(j) << endl;
	}
	const int bufsize =100;

	Stash strStash(sizeof(char)*bufsize, 100);
	ifstream in("Stash3.cpp");
	string line;
	while(getline(in, line))
		strStash.add((char*)line.c_str());

	int k = 0;
	char* cp;
	while((cp = (char*)strStash.fetch(k++)) != 0) {
		cout << cp << endl;
	}

}
