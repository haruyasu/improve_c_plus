#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
    pair<int, string> p = {5, "this is a string"};
    cout << "first is" << p.first << ", second is " << p.second << endl;
    
    return 0;
}