#include <cstdio>
using namespace std;

struct Employee {
    int id;
    const char * name;
    const char * role;
};

int main(int argc, char const *argv[]) {
    Employee joe = {42, "Joe", "Boss"};
    printf("%s is the %s and has id %d\n", joe.name, joe.role, joe.id);
    
    Employee *joep = &joe;
    printf("%s is the %s and has id %d\n", joep->name, joep->role, joep->id);
    
    return 0;
}