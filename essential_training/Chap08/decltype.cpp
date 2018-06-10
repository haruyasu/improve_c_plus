#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

template <typename lhsT, typename rhsT>
auto tf(lhsT &lhs, rhsT &rhs) -> decltype(lhs + rhs) {
    return lhs + rhs;
}

int main(int argc, char const *argv[]) {
    int i = 47;
    const char *cstr = "this si a c-string";
    string strobj("this is a string class string");
    
    auto x = string("this is a string class string");
    decltype(x) y;
    
    cout << "type of i is " << typeid(i).name() << endl;
    cout << "type of cstr is " << typeid(cstr).name() << endl;
    cout << "type of strobj is " << typeid(strobj).name() << endl;
    cout << "type of x is " << typeid(x).name() << endl;
    cout << "type of y is " << typeid(y).name() << endl;
    
    auto z = tf(cstr, strobj);
    cout << "z is " << z << endl;
    cout << "type of z is " << typeid(z).name() << endl;
    
    return 0;
}