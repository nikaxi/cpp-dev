class Value {
    static const int scSize = 100;
    static const long scLong = 100;
    static const float scFloat = 14.3;
    static const int scInts[];
    static const long scLongs[];
    static const float scTable[];
    static const char scLetters[];
    static int size;
    static float table[];
    static char letters[];
};

int Value::size = 100;
int main() { Value v;
}