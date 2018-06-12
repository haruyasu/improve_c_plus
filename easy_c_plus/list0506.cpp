#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    const int ninzu = 5;
    int tensu[ninzu];
    int sum = 0;
    cout << ninzu << " average." << endl;
    for (int i = 0; i < ninzu; i++) {
        cout << i + 1 << " point: ";
        cin >> tensu[i];
        sum += tensu[i];
    }
    
    cout << "sum: " << sum << endl;
    cout << "average: " << static_cast<double>(sum) / ninzu << endl;
    return 0;
}