#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int t = x;
    x = y;
    y = t;
}

void sort(int &a, int &b, int &c) {
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
}

int main(int argc, char const *argv[]) {
    int a, b, c;
    a = 11;
    b = 5;
    c = 3;
    sort(a, b, c);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    
    return 0;
}