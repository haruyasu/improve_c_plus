#include <cstdio>
using namespace std;

int main(int argc, char const *argv[]) {
    float f;
    double df;
    long double ldf;
    
    df = 0.1 + 0.1;
    printf("float df is %1.20f\n", df);
    
    printf("size of float f is %ld\n", sizeof(f));
    printf("size of double float df is %ld\n", sizeof(df));
    printf("size of long double float ldf is %ld\n", sizeof(ldf));
    return 0;
}