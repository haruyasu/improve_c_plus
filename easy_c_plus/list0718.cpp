#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int asize;
    asize = 5;
    
    int *a = new int[asize];
    for (int i = 0; i < asize; i++) {
        a[i] = i;
    }
    for (int i = 0; i < asize; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }
    delete[] a;
    
    return 0;
}