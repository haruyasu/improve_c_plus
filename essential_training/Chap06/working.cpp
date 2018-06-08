#include <cstdio>
using namespace std;

int main(int argc, char const *argv[]) {
    int x = 5;
    int y = 47;
    x = y % x;
    printf("value is %d\n", x);

    x += y;
    printf("value is %d\n", x);

    int ia[5] = {1, 2, 3, 4, 5};
    int *ip = ia;
    printf("value is %d\n", *(++ip));
    printf("value is %d\n", *ip++);
    printf("value is %d\n", *ip);

    return 0;
}