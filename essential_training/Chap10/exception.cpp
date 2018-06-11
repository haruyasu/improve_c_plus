#include <iostream>
#include <exception>
using namespace std;

class E : public exception {
    const char *msg;
    E(){}
public:
    E(const char *s) throw() : msg(s) {}
    const char *what() const throw() {return msg;}
};

const E e_ouch("Ouch!");
const E e_bad("Bad code!");
const E e_worse("Don't do that!");

void broken() {
    cout << "this is a broken function" << endl;
    throw e_ouch;
}

int main(int argc, char const *argv[]) {
    cout << "let's have an emergency!" << endl;
    try {
        broken();
    } catch (E &e) {
        cout << "this can't be good: " << e.what() << endl;
    }
    return 0;
}