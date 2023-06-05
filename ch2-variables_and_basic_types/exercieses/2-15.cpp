#include <iostream>

int main() {
    int ival = 1.01; // value of ival will be trucated to 1
    // int &rval1 = 1.01; // not valid assign a reference to a literal instead of an object
    int &rval2 = ival; // valid
    // int &rval3; // invalid references must be assigned
    std::cout << rval2 << std::endl;
    return 0;
}