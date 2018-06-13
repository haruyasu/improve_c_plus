#include <iostream>
using namespace std;

int max(int a, int b, int c);

int main(int argc, char const *argv[]) {
    int a, b, c;
    a = 10;
    b = 20;
    c = 30;
    
    cout << "max: " << max(a, b, c) << endl;
    
    return 0;
}

int max(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}