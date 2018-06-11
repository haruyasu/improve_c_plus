#include <cstdio>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]) {
    const static size_t maxbuff = 128;
    const char *s1 = "String one";
    const char *s2 = "String two";
    char sd1[maxbuff];
    char sd2[maxbuff];
    int i = 0;
    char c = 0;
    char *cp = nullptr;
    
    strncpy(sd1, s1, maxbuff);
    printf("sd1 is %s\n", sd1);
    strncpy(sd2, s2, maxbuff);
    printf("sd2 is %s\n", sd2);
    
    strncat(sd1, " - ", maxbuff - strlen(sd1) - 1);
    strncat(sd1, s2, maxbuff - strlen(sd1) - 1);
    printf("sd1 is %s\n", sd1);
    
    printf("length of sd1 is %ld\n", strnlen(sd1, maxbuff));
    printf("length of sd2 is %ld\n", strnlen(sd2, maxbuff));
    
    i = strcmp(sd1, sd2);
    printf("sd1 %s sd2 (%d)\n", (i == 0) ? "==" : "!=", i);
    i = strcmp(sd2, s2);
    printf("sd1 %s s2 (%d)\n", (i == 0) ? "==" : "!=", i);
    
    c = 'n';
    cp = strchr(sd1, c);
    printf("Did we find a '%c' in sd1? %s\n", c, cp ? "yes" : "no");
    if (cp) printf("The first '%c' in sd1 is at position %ld\n", c, cp - sd1);
    
    cp = strstr(sd1, s2);
    printf("Did we find '%s' in sd1? %s\n", s2, cp ? "yes" : "no");
    if(cp) printf("The first '%s' in sd1 is at position %ld\n", s2, cp - sd1);
    
    return 0;
}