#include <cstdio>
#include <cerrno>
#include <cstring>
int main(int argc, char const *argv[]) {
    printf("errno is: %ld\n", errno);
    printf("Erasing file foo.bar\n");
    remove("foo.bar");
    printf("errno is: %d\n", errno);
    perror("Couldn't erase file");
    
    printf("the error message is: %s\n", strerror(errno));
    
    return 0;
}