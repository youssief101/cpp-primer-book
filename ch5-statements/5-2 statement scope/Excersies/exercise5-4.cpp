#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

int main() {
    // solution to (a)
    string s{"c plus plus"};
    string::iterator iter = s.begin();
    while (iter != s.end()) {
        cout << *iter << endl;
        ++iter;
    }

    // solution to (b)
    // define status outside the while loop!

    return 0;
}