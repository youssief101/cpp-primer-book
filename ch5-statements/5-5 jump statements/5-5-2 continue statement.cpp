#include <iostream>
using std::cout; using std::endl; using std::cin;

#include <string>
using std::string;

int main() {
    string buf;
    while (cin >> buf && !buf.empty()) {
        if (buf[0] != '_')
            continue;   // get another input
        // sill here? the input starts with an underscore; process buf ...
    }
    return 0;
}