#include <cstdio>
#include <memory>
#include "strc.h"

void message(const char * s) {
    printf("\n%s\n", s);
    fflush(stdout);
}

void disp(const std::shared_ptr<strc> & o) {
    if(o) printf("%s (%ld)\n", o->value(), o.use_count());
    else puts("[null]");
    fflush(stdout);
}

void deleter(const strc * o) {
    printf("deleter: ");
    if(o) printf("%s\n", o->value());
    else printf("[null]\n");
    fflush(stdout);
    delete o;
}

int main(int argc, const char ** argv) {
    message("create shared_ptr");
    std::shared_ptr<strc> a(new strc("thing"), &deleter);
    disp(a);

    a.reset();
    disp(a);

    message("end of scope");
    return 0;
}
