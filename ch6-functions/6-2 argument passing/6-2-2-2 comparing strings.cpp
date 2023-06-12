#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

// compare the length of two strings
bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

int main() {
    string s1{"youssef"}, s2{"mohamed Mokhtar"};
    if (isShorter(s1, s2)) {
        cout << "s1 is smaller than s2" << endl;
    } else {
        cout << "s1 is greater than s2" << endl;
    }
}