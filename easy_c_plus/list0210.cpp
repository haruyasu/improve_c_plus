#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int a, b;
    a = 10;
    b = 25;
    int min = a < b ? a : b;
    cout << "min = " << min << endl;
    cout << "sub = " << (a < b ? b - a : a - b) << endl;
    
    return 0;
}