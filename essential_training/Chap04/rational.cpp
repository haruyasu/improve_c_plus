#include <cstdio>
#include <iostream>
using namespace std;

class Rational {
    int _n = 0;
    int _d = 1;
public:
    Rational(int numerator = 0, int denominator = 1) : _n(numerator), _d(denominator) {};
    Rational(const Rational & rhs) : _n(rhs._n), _d(rhs._d) {}; // copy constructor
    ~Rational();
    inline int numerator() const {return _n;};
    inline int denominator() const {return _d;};
    Rational & operator = (const Rational &);
    //Rational operator + (const Rational &) const;
    Rational operator - (const Rational &) const;
    Rational operator * (const Rational &) const;
    Rational operator / (const Rational &) const;
    operator std::string() const;
};

Rational & Rational::operator = (const Rational & rhs) {
    if (this != &rhs) {
        _n = rhs.numerator();
        _d = rhs.denominator();
    }
    return *this;
}

// Rational Rational::operator + (const Rational & rhs) const {
//     return Rational((_n * rhs._d) + (_d * rhs._n), _d * rhs._d);
// }

Rational Rational::operator - (const Rational & rhs) const {
    return Rational((_n * rhs._d) - (_d * rhs._n), _d * rhs._d);
}

Rational Rational::operator * (const Rational & rhs) const {
    return Rational(_n * rhs._n, _d * rhs._d);
}

Rational Rational::operator / (const Rational & rhs) const {
    return Rational(_n * rhs._d, _d * rhs._n);
}

Rational::operator std::string() const {
    const static int maxstring = 64;
    char s[maxstring];
    snprintf(s, maxstring, "%d/%d", _n, _d);
    return std::string(s);
}

Rational::~Rational() {
    printf("dtor: %d/%d\n", _n, _d);
    _n = 0;
    _d = 1;
}

Rational operator + (const Rational & lhs, const Rational & rhs) {
    return Rational((lhs.numerator() * rhs.denominator()) + (lhs.denominator() * rhs.numerator()), lhs.denominator() * rhs.denominator());
}

std::ostream & operator << (std::ostream & o, const Rational & r) {
    return o << r.numerator() << '/' << r.denominator();
}

int main(int argc, char const *argv[]) {
    Rational a = 7;
    cout << "a is: " << a << endl;
    Rational b(5, 3);
    cout << "b is: " << b << endl;
    Rational c = b;
    cout << "c is: " << c << endl;
    Rational d;
    cout << "d is: " << d << endl;
    d = c;
    cout << "d is: " << d << endl;
    Rational & e = d;
    d = e;
    cout << "e is: " << e << endl;
    
    cout << a << "+" << b << " = " << a + b << endl;
    cout << a << "-" << b << " = " << a - b << endl;
    cout << a << "*" << b << " = " << a * b << endl;
    cout << a << "/" << b << " = " << a / b << endl;
    
    cout << 14 << " + " << a << " = " << 14 + a << endl;
    
    string s = "Rational as as string: ";
    s += b;
    cout << s << endl;
    
    return 0;
}


