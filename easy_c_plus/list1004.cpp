#include <string>
#include <iostream>
using namespace std;

class Account {
private:
    string full_name;
    string number;
    long crnt_balance;
public:
    Account(string name, string num, long amnt);
    string name() {return full_name;};
    string no() {return number;};
    long balance() {return crnt_balance;};
    void deposit(long amnt);
    void withdraw(long amnt);
};

Account::Account(string name, string num, long amnt) {
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
    Account mem1("ken", "12345", 1000);
    Account mem2("bob", "45678", 400);
    mem1.withdraw(200);
    mem2.deposit(5900);
    cout << "member 1 : " << mem1.name() << " " << mem1.no() << " " << mem1.balance() << endl;
    cout << "member 2 : " << mem2.name() << " " << mem2.no() << " " << mem2.balance() << endl;
    return 0;
}
