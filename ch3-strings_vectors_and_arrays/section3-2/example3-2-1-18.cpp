#include <iostream>
using namespace std;
#include <string>
#include <cctype>

int main() {
    // change s characters to uppercase
    string s{"hello"};
    for (int i{0}; i < s.size(); i++) {
        s[i] = toupper(s[i]);
    }
    cout << s << endl;

    // another method "better one"
    string s2{"hello, world!!!"};
    for (auto &c : s2) {    // for every char in s(note: c is a reference)
        c = toupper(c); // c is a reference, so the assignement changes the char in s
    }
    cout << s2 << endl;
    return 0;
}