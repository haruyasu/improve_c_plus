#include <cstdio>
using namespace std;

class num {
    int value = 0;
public:
    num(){}
    num(int x) :  value(x) {}
    int getvalue() const {return value;}
    int setvalue(int x) {return value = x;}
    num &operator ++ ();
    num operator ++ (int);
    num &operator -- ();
    num operator -- (int);
};

num &num::operator ++ () {
    puts("pre-increment");
    value += 1;
    return *this;
}

num num::operator ++ (int) {
    puts("post-increment");
    num temp = *this;
    ++(*this);
    return temp;
}

num &num::operator -- () {
    puts("pre-increment");
    value -= 1;
    return *this;
}

num num::operator -- (int) {
    puts("post-increment");
    num temp = *this;
    --(*this);
    return temp;
}

int main(int argc, char const *argv[]) {
    num n(42);
    printf("value is %d\n", (++n).getvalue());
    printf("value is %d\n", n.getvalue());
    printf("value is %d\n", (n++).getvalue());
    printf("value is %d\n", n.getvalue());
    printf("value is %d\n", (--n).getvalue());
    printf("value is %d\n", n.getvalue());
    printf("value is %d\n", (n--).getvalue());
    printf("value is %d\n", n.getvalue());
    return 0;
}