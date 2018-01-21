class NoCC {
    int i;
    NoCC(const NoCC&);
    public:
    NoCC(int ii=0):i(ii) {}
};

void f(NoCC);
int main() {
    NoCC n;
   // f(n); // error
   //  NoCC n2 = n; // error 
   //  NoCC n3(n); // error
}