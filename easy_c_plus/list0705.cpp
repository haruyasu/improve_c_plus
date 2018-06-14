#include <iostream>
using namespace std;

void sum_mul(int x, int y, int *sum, int *mul) {
    *sum = x + y;
    *mul = x * y;
}

int main(int argc, char const *argv[]) {
    int a, b;
    int wa = 0, seki = 0;
    a = 10;
    b = 20;
    sum_mul(a, b, &wa, &seki);
    
    cout << "sum: " << wa << endl;
    cout << "mul: " << seki << endl;
    return 0;
}