class X{
    int i;
    float f;
    char c;
    char* s;
    public:
    X(): i(7), f(1.7), c('a'), s("show the world") {}
};

int main() {
    X x;
    int i(100);
    int *ip = new int(47);
    return 0;
}