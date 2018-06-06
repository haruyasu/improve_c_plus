#include <cstdio>
using namespace std;

class Class1 {
    int i;
public:
    // void setvalue(const int value) { i = value; }
    // int getvalue() const { return i; }
    void setvalue(const int value);
    int getvalue() const;
};

void Class1::setvalue(const int value) {
    i = value;
}

int Class1::getvalue() const {
    printf("getvalue(): this is %p\n", this);
    return i;
}

int main(int argc, char ** argv) {
    int i = 47;
    Class1 object1;
    Class1 object2;
    
    object1.setvalue(i);
    printf("value is %d\n", object1.getvalue());
    printf("address of object1 is %p\n", &object1);

    object2.setvalue(i);
    printf("value is %d\n", object2.getvalue());
    printf("address of object2 is %p\n", &object2);

    return 0;
}