#include <iostream>
using namespace std;

template <class Type> Type maxof(Type a, Type b) {
    return a > b ? a : b;
}

int main(int argc, char const *argv[]) {
    int a, b;
    double x;
    
    a = 5;
    b = 10;
    x = 3.5;
    
    cout << "max of a, b: " << maxof(a, b) << endl;
    cout << "max of a, x: " << maxof<double>(a, x) << endl;
    return 0;
}