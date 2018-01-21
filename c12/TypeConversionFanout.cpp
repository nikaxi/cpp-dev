class Orange {};
class Pear {};

class Apple {
    public:
    operator Orange() const;
    operator Pear() const;
};

void eat(Orange);
void eat(Pear);

int main() {
    Apple c;
    eat(c); //引发2种类型转换的选择，所以无法编译
}