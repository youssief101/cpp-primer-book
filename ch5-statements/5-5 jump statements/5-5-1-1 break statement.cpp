#include <iostream>
using std::cout; using std::endl; using std::cin;

#include <string>
using std::string;

int main() {
    string buf;
    while (cin >> buf && !buf.empty()) {
        switch (buf[0]) {
            case '-':
                // process up to the first blank
                for (auto it = buf.begin() + 1; it != buf.end(); ++it) {
                    if (*it == ' ')
                        break; // #1, leaves the for loop
                    // 
                }
                // break#1 transfers control here
                // remaining '-' processing:
                break;  // #2, leaves the switch statement
            case '+':
                // ..
        }   // end switch
        // end of switch: break #2 tranfers contorl here
    }   // end of while
    return 0;
}