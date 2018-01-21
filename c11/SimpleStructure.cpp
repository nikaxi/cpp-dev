struct Simple
{
    int a;
};


int main() {
    Simple so, *sp = &so;
    sp->a;
    so.a;
    // *ip = 4 这个*是间接引用指针
}