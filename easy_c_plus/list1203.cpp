#include <climits>
#include <iostream>
using namespace std;

class Counter {
    unsigned cnt;
public:
    Counter() : cnt(0) {}
    operator unsigned() const { return cnt; }
    bool operator!() const { return cnt == 0; }
    Counter& operator++() {
        if (cnt < UINT_MAX) cnt++;
        return *this;
    }
    Counter operator++(int) {
        Counter x = *this;
        ++(*this);
        return x;
    }
    Counter& operator--() {
        if (cnt > 0) cnt--;
        return *this;
    }
    Counter operator--(int) {
        Counter x = *this;
        --(*this);
        return x;
    }
};

int main(int argc, char const *argv[]) {
    int no;
    Counter x;
    Counter y;
    
    cout << "count up times : ";
    cin >> no;
    
    for (int i = 0; i < no; i++) {
        cout << x++ << ' ' << ++y << endl;
    }
    cout << "count down times : ";
    cin >> no;
    for (int i = 0; i < no; i++) {
        cout << x-- << ' ' << --y << endl;
    }
    if (!x) {
        cout << "x is 0." << endl;
    } else {
        cout << "x is not 0." << endl;
    }
    
    return 0;
}