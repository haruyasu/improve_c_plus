#include <cstdio>
#include <cstdint>
using namespace std;

const int &f(const int &x) {
    static int y = x;
    ++y;
    return y;
}

typedef uint8_t points_t;
typedef unsigned char rank_t;

struct score {
    points_t p;
    rank_t r;
};

int main(int argc, char const *argv[]) {
    printf("sizeof int8_t is %ld bits\n", sizeof(int8_t) * 8);
    printf("sizeof int16_t is %ld bits\n", sizeof(int16_t) * 8);
    printf("sizeof int32_t is %ld bits\n", sizeof(int32_t) * 8);
    printf("sizeof int64_t is %ld bits\n", sizeof(int64_t) * 8);
    
    puts("This is a string \\ \' \" \x40");
    
    int i = 5;
    int &ir = i;
    
    printf("the value is %d\n", ir);
    printf("the value is %d\n", i);
    printf("the value is %d\n", f(i));
    printf("the value is %d\n", i);
    
    score s = {5, 1};
    printf("score s has %d points and rank of %d\n", s.p, s.r);
    
    return 0;
}