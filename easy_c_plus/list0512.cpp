#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int a[4][3];
    cout << "a: " << sizeof(a) / sizeof(a[0]) << "rows " << sizeof(a[0]) / sizeof(a[0][0]) << "columns" << endl;
    cout << "num: " << sizeof(a) / sizeof(a[0][0]) << endl;
    
    return 0;
}