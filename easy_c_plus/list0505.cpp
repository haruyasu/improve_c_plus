#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int a[] = {1, 2, 3, 4, 5};
    int a_size = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < a_size; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }
    return 0;
}
