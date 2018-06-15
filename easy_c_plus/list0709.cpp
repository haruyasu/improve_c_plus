#include <iostream>
using namespace std;

// void reverse(int *a, int n) {
void reverse(int a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int t = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = t;
    }
}

int main(int argc, char const *argv[]) {
    const int n = 5;
    int c[n];
    for (int i = 0; i < n; i++) {
        cout << "c[" << i << "] : " << i << endl;
        c[i] = i;
    }
    // c -> &c[0]
    reverse(c, n);
    cout << endl;
    
    for (int i = 0; i < n; i++) {
        cout << "c[" << i << "] = " << c[i] << endl;
    }
    return 0;
}