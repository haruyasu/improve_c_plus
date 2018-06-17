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

class Account {
    string full_name;
    string number;
    long crnt_balance;
    Date open;
public:
    Account(string name, string num, long amnt, int y, int m, int d);
    void deposit(long amnt);
    void withdraw(long amnt);
    string name() const { return full_name; }
    string no() const { return number; }
    long balance() const { return crnt_balance; }
    Date opening_date() const { return open; }
};

Account::Account(string name, string num, long amnt, int y, int m, int d) : open(y, m, d) {
    full_name = name;
    number = num;
    crnt_balance = amnt;
}

void Account::deposit(long amnt) {
    crnt_balance += amnt;
}

void Account::withdraw(long amnt) {
    crnt_balance -= amnt;
}

int main(int argc, char const *argv[]) {
    Account mem1("bob", "12345", 1000, 2125, 1, 24);
    Account mem2("sam", "67891", 200, 2122, 5, 15);
    
    mem1.withdraw(199);
    mem2.deposit(222);
    
    cout << mem1.name() << " " << mem1.no() < " " << mem1.balance() << " " << mem1.opening_date() << endl;
    
    return 0;
}
