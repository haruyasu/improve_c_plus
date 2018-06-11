#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
    string s1 = "This is a string";
    
    cout << "size is same as length: " << s1.size() << endl;
    cout << "size is same as length: " << s1.length() << endl;
    
    cout << "concatenated strings: ";
    string s2 = "this is also a string";
    cout << s1 + ":" + s2 << endl;
    
    cout << "is s1 == s2? " << (s1 == s2 ? "yes" : "no") << endl;
    cout << "copy-assign s2 = s1" << endl;
    s2 = s1;
    cout << "is s1 == s2? " << (s1 == s2 ? "yes" : "no") << endl;
    cout << "is s1 > \"other string\"? " << (s1 > "other string" ? "yes" : "no") << endl;
    cout << "is s1 < \"other string\"? " << (s1 < "other string" ? "yes" : "no") << endl;
    cout << "is \"other string\" > s1? " << ("other string" > s1 ? "yes" : "no") << endl;
    cout << "is \"other string\" < s1? " << ("other string" < s1 ? "yes" : "no") << endl;
    
    cout << "each character: ";
    for(char c : s1) {
        cout << c << ' ';
    }
    cout << endl;
    
    s1.insert(s1.begin() + 5, 'X');
    cout << "after insert: " << s1 << endl;
    
    s1.erase(s1.begin() + 5);
    cout << "after insert: " << s1 << endl;
    
    s1.replace(5, 2, "ain't");
    cout << "after replace: " << s1 << endl;
    
    cout << "substr: " << s1.substr(5, 5) << endl;
    
    size_t pos = s1.find("s");
    cout << "find first \"s\" in s1 (pos): " << pos << endl;
    
    pos = s1.rfind("s");
    cout << "find last \"s\" in s1 (pos): " << pos << endl;
    
    return 0;
}