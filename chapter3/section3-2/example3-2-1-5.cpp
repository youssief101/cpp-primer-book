#include <iostream>
using namespace std;
#include <string>

int main() {
    // os << s  writes s onto ouput stream os, return os
    string s1{"khaled"};
    cout << s1 << endl; // khaled

    // is >> s
    string s2;
    cin >> s2;  // reads whitespace-separated string from is into s, return is

    // getline(is, s)
    string s3;
    getline(cin, s3);   // reads a line of input from is into s, return is

    // s.empty()
    string s4;
    cin >> s4;
    if (s4.empty()) {   // returns true if s is empty; otherwise returns false
        cout << "s4 is empty" << endl;
    } else {
        cout << "s4 not empty" << endl;
    }

    // s.size()
    string s5;
    cin >> s5;
    cout << "the size of s5 is: " << s5.size() << endl; // returns the numbers of characters in s

    // s[n]
    string s6;
    cin >> s6;
    cout << "The sixth charcter in your input is: " << s6[5] << endl;   // returns a reference to the char at position n in s; positions start at 0

    // s1 + s2
    string s7{"Youssef"};
    string s8{"Mohamed"};
    cout << s7 + " " + s8 << endl;  // returns a string that is a concatenation of s1, s2

    // s1 = s2
    string s11{"ramy"};
    string s12{"ahmed"};
    s11 = s12; // replaces characters in s1 with a copy of s2

    // s1 == s2
    string s9{"ahmed"};
    string s10{"ahmed"};
    if (s9 == s10) {    // the strings s1 and s2 are equal if they contain the same characters
        cout << "s9 is equal to s10" << endl;
    } else {
        cout << "s9 is not equal to s10" << endl;
    }

    // s1 != s2
    // the opposite of the last example

    // <, <=, >, >=
    string s13{"Ahmed"};
    string s14{"Bebo"};
    if (s13 < s14) {    // comparisons are case-sensitive and use dictionary ordering
        cout << s13 + " comes before " + s14 << endl;
    } else {
        cout << s14 << " comes before " << s13 << endl;
    }
    return 0;
}