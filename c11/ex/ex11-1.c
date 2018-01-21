struct Bird {
    int name;    
} bird ;

struct Rock {
    int name;
} rock ;


int main() {
    struct rock *b1;
    struct bird *r1;

    // 通过void 指针可以跨越类型互相引用
    void * p = b1;
    r1 = p;

}