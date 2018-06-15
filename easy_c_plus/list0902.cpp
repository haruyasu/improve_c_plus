#include <iostream>
using namespace std;

template <class Type>
Type maxof(const Type x[], int n) {
    Type max = x[0];
    for (size_t i = 0; i < n; i++) {
        if (x[i] > max) {
            max = x[i];
        }
    }
    return max;
}

int main(int argc, char const *argv[]) {
    const int isize = 8;
    int ix[isize];
    
    for (int i = 0; i < isize; i++) {
        cout << i + 1 << " : " << i << endl;
        ix[i] = i;
    }
    cout << "max : " << maxof(ix, isize) << endl;

    const int dsize = 5;
    double dx[dsize];
    
    for (int i = 0; i < dsize; i++) {
        cout << i + 1 << " : " << i * 2.1 << endl;
        dx[i] = i * 2.1;
    }
    cout << "max : " << maxof(dx, dsize) << endl;
    
    return 0;
}