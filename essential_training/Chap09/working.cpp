#include <cstdio>
using namespace std;

int main(int argc, char const *argv[]) {
    const static char *fn1 = "file1.txt";
    const static char *fn2 = "file2.txt";
    
    FILE *fh = fopen(fn1, "w");
    fclose(fh);
    rename(fn1, fn2);
    
    remove(fn1);
    remove(fn2);
    puts("Done.");
    
    const static int bufsize = 256;
    char buf[bufsize];
    fputs("Prompt: ", stdout);
    fflush(stdout);
    fgets(buf, bufsize, stdin);
    fputs(buf, stdout);

    return 0;
}