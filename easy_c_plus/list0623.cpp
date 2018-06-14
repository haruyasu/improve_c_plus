#include <iostream>
using namespace std;

int &ref() {
    static int x;
    return x;
}

int main(int argc, char const *argv[]) {
    ref() = 5;
    cout << "ref() = " << ref() << endl;
    
    return 0;
}