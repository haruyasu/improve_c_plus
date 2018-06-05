#include <cstdio>
using namespace std;

// struct A {
//     int ia;
//     int ib;
//     int ic;
// };

// class A {
// public:
//     int ia;
//     int ib;
//     int ic;
// };

class A {
    int ia;
public:
    void setvalue(const int a);
    int getvalue();
    int getvalue() const;
};

void A::setvalue(const int a) {
    ia = a;
}

int A::getvalue() {
    puts("mutable getter");
    return ia;
}

int A::getvalue() const {
    puts("const getter");
    return ia;
}

int main(int argc, char ** argv) {
    // A a = {1, 2, 3};
    // printf("ia is %d, ib is %d, ic is %d\n", a.ia, a.ib, a.ic);
    // 
    // A *pa = &a;
    // printf("ia is %d, ib is %d, ic is %d\n", pa->ia, pa->ib, pa->ic);
    
    A a;
    const A b = a;
    a.setvalue(42);
    printf("value is %d\n", a.getvalue());
    printf("value is %d\n", b.getvalue());
    return 0;
}