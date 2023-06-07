#include <iostream>
using std::cout; using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main() {
    const char *cp; // a pointer to a const char
    // uncomment to find the error
    // char *q = static_cast<char *>(cp); // error: static_cast can't cast away const
    static_cast<string>(cp);           // ok: converts string literal to string
    // uncomment to find the error
    // const_cast<string>(cp);            // error: const_cast only changes contness
    
    return 0;
}