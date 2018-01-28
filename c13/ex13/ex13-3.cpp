#include "PStash.h"
#include "Counted.h"
using namespace std;

int main() {
    PStash ps1;
    for(int i=0; i < 20; i++) {
        Counted* c1 = new Counted;
        ps1.add(c1);
    }
    cout << ps1.count() << endl;
    
}