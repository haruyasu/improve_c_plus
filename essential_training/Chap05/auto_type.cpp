#include <cstdio>
#include <string>
#include <typeinfo>
#include <vector>
using namespace std;

string func() {
    return string("this is a string");
}

int main(int argc, char const *argv[]) {
    auto x = func();
    printf("x is %s\n", x.c_str());
    printf("type of x is %s\n", typeid(x).name());
    
    vector<int> vi = {1, 2, 3, 4, 5};
    for (auto it = vi.begin(); it != vi.end(); ++it) {
        printf("int is %d\n", *it);
    }
    
    for (auto i : vi) {
        printf("int is %d\n", i);
    }
    
    return 0;
}