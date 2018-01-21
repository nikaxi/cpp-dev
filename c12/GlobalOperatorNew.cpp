#include <cstdio>
#include <cstdlib>
using namespace std;
// 全局new 与 delete重载, 需要对编译器的工作原理有一定的了解



// 重载的原理 必须有size_t 编译器自动计算object大小，并传递给我们
void* operator new(size_t sz) {
    printf("operator new: %d bytes\n", sz);
    void *m = malloc(sz);
    if (!m) puts("out of memory");
    return m;
}

// 对象析构函数调用后，删除对应内存
void operator delete(void *m) {
    puts("operator delete");
    free(m);
}

class S {
    int i[100];
    public:
    S() { puts("S::S()"); }
    ~S() { puts("S::~S()");}
};


int main() {
    puts("creating & destroying an int");
    int *p = new int(47);
    delete p;
    puts("creating & destroying an s");
    S* s = new S;
    delete s;
    puts("creating & destroying an s[3]");
    S* sa = new S[3];
    delete []sa;
}