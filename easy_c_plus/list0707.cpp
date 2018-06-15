#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;
    for (int i = 0; i < 5; i++) {
        cout << "a[" << i << "] = " << a[i] << " *(a+" << i << ") = " << *(a + i) << " "
             << "p[" << i << "] = " << p[i] << " *(p+" << i << ") = " << *(p + i) << endl;
    }
    for (int i = 0; i < 5; i++) {
        cout << "&a[" << i << "] = " << &a[i] << " a+" << i << " = " << a + i << " "
             << "&p[" << i << "] = " << &p[i] << " p+" << i << " = " << p + i << endl;
    }
    
    // same
    // a[i]
    // *(a + i)
    // p[i]
    // *(p + i)
    
    return 0;
}