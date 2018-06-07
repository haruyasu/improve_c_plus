#include <cstdio>
using namespace std;

int main(int argc, char const *argv[]) {
    char cstring[] = "String";
    puts(cstring);
    for (unsigned int i = 0; cstring[i]; i++) {
        printf("%02d: %c\n", i, cstring[i]);
    }
    printf("size of array is %ld\n", sizeof(cstring));
    
    return 0;
}