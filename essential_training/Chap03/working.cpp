#include <cstdio>
#include "preproc.h"
#include "includeA.h"
#include "includeB.h"
using namespace std;

#define HELLO "Hello World"
#define MACRO(a, b) (a * b)
#define MAX(a, b) (a > b ? a : b)
#define SWAP(a, b) (a^=b^=a^=b)

int increment() {
    static int i = 42;
    i += 5;
    printf("returning: %d\n", i);
    return i;
}

int main(int argc, char ** argv) {
    printf("value is %d\n", ONE);
    printf("integer constant: %d\n", _iOne);
    printf("char constant: %s\n", _sOne);
    printf("the string is %s\n", HELLO);
    
    int ia = 5;
    int ib = 7;
    printf("value is %d\n", MACRO(ia, ib));
    printf("max is %d\n", MAX(ia, ib));
    
    int x = 50;
    printf("max of %d and %d is: %d\n", x, increment(), MAX(x, increment()));
    printf("max of %d and %d is: %d\n", x, increment(), MAX(x, increment()));
    
    int ix = 10;
    int iy = 20;
    printf("x is %d, y is %d\n", ix, iy);
    SWAP(ix, iy);
    printf("x is %d, y is %d\n", ix, iy);
    
    return 0;
}