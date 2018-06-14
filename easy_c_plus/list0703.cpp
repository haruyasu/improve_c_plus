#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int x = 123, y = 567, sw;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "[0..x / 1..y] : ";
    cin >> sw;
    int *ptr;
    if (sw == 0) {
        ptr = &x;
    } else {
        ptr = &y;
    }
    *ptr = 999;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}