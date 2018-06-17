#include <string>
#include <iostream>
#include <ctime>
#include <sstream>
using namespace std;

class Date {
    int y;
    int m;
    int d;
public:
    Date();
    Date(int yy, int mm = 1, int dd = 1);
    int year() const { return y; }
    int month() const { return m; }
    int day() const { return d; }
    Date preceding_day() const;
    string to_string() const;
};

ostream& operator<<(ostream& s, const Date& x);
istream& operator>>(istream& s, Date& x);

Date::Date() {
    time_t current = time(NULL);
    struct tm *local = localtime(&current);
    
    y = local->tm_year + 1900;
    m = local->tm_mon + 1;
    d = local->tm_mday;
}

Date::Date(int yy, int mm, int dd) {
    y = yy;
    m = mm;
    d = dd;
}

Date Date::preceding_day() const {
    int dmax[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    Date temp = *this;
    
    if (temp.d > 1) {
        temp.d--;
    } else {
        if (--temp.m < 1) {
            temp.y--;
            temp.m = 12;
        }
        temp.d = dmax[temp.m - 1];
    }
    return temp;
}

string Date::to_string() const {
    ostringstream s;
    s << y << "year" << m << "month" << d << "day";
    return s.str();
}

int main(int argc, char const *argv[]) {
    Date today;
    // cout << "Today is " << today << endl;
    // cout << "Yesterday is " << today.preceding_day() << endl;
    return 0;
}
