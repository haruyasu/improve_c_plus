#include <iostream>
using namespace std;

void put_nchar(char c, int n) {
    while (n-- > 0) {
        cout << c;
    }
}

int main(int argc, char const *argv[]) {
    int n;
    n = 5;
    for (int i = 1; i <= n; i++) {
        put_nchar(' ', n - i);
        put_nchar('*', i);
        cout << endl;
    }
    return 0;
}