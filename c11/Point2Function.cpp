class Simple2 {
    public:
    int f(float) const { return 1; }
};

int (Simple2::*fp)(float) const;
int (Simple2::*fp2)(float) const = &Simple2::f;

int main() {
    fp = &Simple2::f; //没有参数列表，因为fp的定义里有参数列表
}

