#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int t = x;
    x = y;
    y = t;
}

int main(int argc, char const *argv[]) {
    int a, b;
    a = 10;
    b = 20;
    swap(a, b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    
    return 0;
}