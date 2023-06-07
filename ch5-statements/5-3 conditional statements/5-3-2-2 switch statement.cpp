#include <iostream>
using std::cin; using std::cout; using std::endl;

char getVal() {
    char userInput;
    return cin >> userInput, userInput;
}
// uncomment to find the errors:
/*
int main() {
    char ch = getVal();
    int ival = 42;
    switch (ch)
    {
    case 3.14: // error: noninteger as case label
    case ival; // error: nonconstant as case label
    // ...
    return 0;
}
*/