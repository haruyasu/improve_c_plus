#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(int argc, char const *argv[]) {
    set<string> strset = {"one", "two", "three", "four", "five"};
    // multiset<string> strset = {"one", "two", "three", "four", "five"};
    cout << "size of set: " << strset.size() << endl;
    cout << "ordered set is alphabetical:" << endl;
    for (string s : strset) {
        cout << s << " ";
    }
    cout << endl << endl;
    
    cout << "insert element \"six \":" << endl;
    strset.insert("six");
    for (string s : strset) {
        cout << s << " ";
    }
    cout << endl << endl;
    
    cout << "find and erase element \"six\":" << endl;
    set<string>::iterator it = strset.find("six");
    if (it != strset.end()) {
        cout << "erasing " << *it << endl;
        strset.erase(it);
    } else {
        cout << "not found" << endl;
    }
    for (string s : strset) {
        cout << s << " ";
    }
    cout << endl << endl;
    
    cout << "insert duplicate element \"five\":" << endl;
    auto rp = strset.insert("five");
    if (rp.second) {
        cout << "input succeeded" << endl;
    } else {
        cout << "input failed" << endl;
    }
        
    for (string s : strset) {
        cout << s << " ";
    }
    cout << endl << endl;
    
    return 0;
}