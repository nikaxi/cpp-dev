class A{
    public:
    int a[5];
};
// 指向数组成员的 成员指针
int main() {
    A a, *pa = &a;
    int (A::*pa)= &A::a[5];

}