#include <initializer_list>
using std::initializer_list;

#include <string>
using std::string;

#include <iostream>
using std::cout; using std::endl;

void error_msg(initializer_list<string> il) {
    for (auto beg = il.begin(); beg != il.end(); ++beg) {
        cout << *beg << " ";
    }
    cout << endl;
}

int main() {
    string expected{"working"};
    string actual{"notworking"};
    if (expected != actual) {
        error_msg({"functionX", expected, actual});
    } else {
        error_msg({"functionX", "okay"});
    }
    return 0;
}