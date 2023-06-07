#include <iostream>
using std::cout; using std::endl; using std::cin;

#include <string>
using std::string;

int main() {
    // Expression statement
    int ival{10};
    ival + 5;             // rather useless expression statement
    cout << ival << endl; // useful expression statement

    // Null statements
    ; // a null statement
    string sval{"sought"};
    string s{""};
    while (cin >> s && s != sval) {
        ; // null statement
    }
    
    return 0;
}