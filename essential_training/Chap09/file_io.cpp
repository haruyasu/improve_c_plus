#include <cstdio>
using namespace std;

const int maxString = 1024;

int main(int argc, char const *argv[]) {
    const char *fn = "test.file";
    const char *str = "This is a literal C-string.\n";
    
    printf("writing file\n");
    FILE *fw = fopen(fn, "w");
    for (int i = 0; i < 5; i++) {
        fputs(str, fw);
    }
    
    fclose(fw);
    printf("done\n");
    
    //read
    printf("readin file\n");
    char buf[maxString];
    FILE *fr = fopen(fn, "r");
    while (fgets(buf, maxString, fr)) {
        fputs(buf, stdout);
    }

    fclose(fr);
    remove(fn);
    
    printf("done.\n");
    
    return 0;
}