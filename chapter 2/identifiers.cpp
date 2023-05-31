#include <iostream>

int main() {
    // int double = 3.14; // not valid double is reserved in c++ keywords
    int _{0}; // valid
    std::cout << _ << std::endl;
    // int catch - 22; // not valid catch is reserved in c++ keywords
    double Double = 3.14; // valid
    std::cout << Double << std::endl;
    // int 1_ = 1; // not valid
    int _2 = 1; // vaild
    std::cout << _2 << std::endl;
}