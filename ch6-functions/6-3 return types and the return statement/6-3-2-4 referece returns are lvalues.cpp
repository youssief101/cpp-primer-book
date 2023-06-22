#include <iostream>
#include <string>
using namespace std;

char &get_val(string &str, string::size_type ix) {
    return str[ix];
}

int main() {
    string s{"A value"};
    cout << s << endl; // prints A value
    get_val(s, 0) = 'a';
    cout << s << endl; // prints a value
    return 0;
}