#include <cstdio>
using namespace std;

const char * prompt();
int jump(const char *);

void fa() { puts("this is fa()"); }
void fb() { puts("this is fb()"); }
void fc() { puts("this is fc()"); }
void fd() { puts("this is fd()"); }
void fe() { puts("this is fe()"); }

void (*funcs[])() = {fa, fb, fc, fd, fe, nullptr};

int main(int argc, char ** argv) {
    while(jump(prompt()));
    puts("/nDone");
    return 0;
}

const char * prompt() {
    puts("Choose an option:");
    puts("1. Function fa()");
    puts("2. Function fb()");
    puts("3. Function fc()");
    puts("4. Function fd()");
    puts("5. Function fe()");
    puts("Q. Quit.");
    printf(">> ");

    fflush(stdout);
    const int buffsz = 16;
    static char response[buffsz];
    fgets(response, buffsz, stdin);
    
    return response;
}

int jump(const char * rs) {
    char code = rs[0];
    if (code == 'q' || code == 'Q') {
        return 0;
    }
    
    int func_length = 0;
    while (funcs[func_length] != NULL) {
        func_length++;
    }
    
    int i = (int)code - '0';
    i--;
    if (i < 0 || i >= func_length) {
        puts("invalid choice");
        return 1;
    } else {
        funcs[i]();
        return 1;
    }
}
