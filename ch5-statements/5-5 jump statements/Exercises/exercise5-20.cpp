#include <iostream>
using std::cout; using std::endl; using std::cin;

#include <string>
using std::string;

int main() {
    string s1{""}, s2{""};
    while (cin >> s1) {
        if (s1 == s2) {
            cout << "the string: " << s1 << " has occured twice" << endl;
            break;
        } else {
            s2 = s1;
        }
    }

    if (!cin) {
        cout << "no word was repeated." << endl;
    }
    return 0;
}