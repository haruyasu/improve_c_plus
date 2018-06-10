#include <cstdio>
#include <string>
using namespace std;

template <typename T> T maxof (T a, T b) {
    return (a > b ? a : b);
}

int main(int argc, char const *argv[]) {
    printf("max is %d\n", maxof<int>(7, 9));
    
    printf("max is %s\n", maxof<const char *>("this", "that"));
    printf("max is %s\n", maxof<string>("this", "that").c_str());
    return 0;
}