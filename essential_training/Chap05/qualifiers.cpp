#include <iostream>
using namespace std;

class S {
public:
    int static_value() {
        static int x = 7;
        return ++x;
    }
};

int func() {
    static int x = 7;
    return ++x;
}

int main(int argc, char const *argv[]) {
    // int i = 42;
    // printf("The integer is %d\n", i);
    
    printf("The integer is %d\n", func());
    printf("The integer is %d\n", func());
    printf("The integer is %d\n", func());
    printf("The integer is %d\n", func());
    printf("The integer is %d\n", func());
    
    S a;
    S b;
    printf("The integer is %d\n", a.static_value());
    printf("The integer is %d\n", b.static_value());
    
    return 0;
}