/*
    write a program to read two strings, and report whether the strings
    are equal. If not, report which of the two is larger. Now, change
    the program to report whether the strings have the same length,
    and if not, report which is longer
*/

#include <iostream>
using namespace std;
#include <string>

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2) {
        cout << "two inputs are equal" << endl;
    } else if (s1 > s2) {
        cout << "s1 is larger than s2" << endl;
    } else {
        cout << "s2 is larger than s1" << endl;
    }

    string s3, s4;
    cin >> s3 >> s4;
    if (s3.size() == s4.size()) {
        cout << "two strings are equal in length" << endl;
    } else if (s3.size() > s4.size()) {
        cout << "s3 is greater than s4" << endl;
    } else {
        cout << "s4 is greater than s3" << endl;
    }
    return 0;
}