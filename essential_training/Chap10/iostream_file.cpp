#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[]) {
    static int lineno = 0;
    static const char *filename = "test.txt";
    static const char *textstring = "This is the test file";
    
    cout << "write the file:" << endl;
    ofstream ofile(filename);
    ofile << ++lineno << " " << textstring << endl;
    ofile << ++lineno << " " << textstring << endl;
    ofile << ++lineno << " " << textstring << endl;
    ofile.close();
    
    static char buf[128];
    cout << "read the file:" << endl;
    ifstream infile(filename);
    while (infile.good()) {
        infile.getline(buf, sizeof(buf));
        cout << buf << endl;
    }
    infile.close();
    
    cout << "delete file." << endl;
    remove(filename);
    
    return 0;
}