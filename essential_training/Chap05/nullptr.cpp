#include <cstdio>
using namespace std;

#ifndef NULL
#define NULL (0LL)
#endif

void f(int i) {
    printf("the int is %d\n", i);
}

void f(const char * s) {
    printf("the pointer is %p\n", s);
}

int main(int argc, char const *argv[]) {
    f(nullptr);
    f(0);
    return 0;
}