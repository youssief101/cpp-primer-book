#include <iostream>

int main() {
    double ival = 1024;
    double &refVal = ival; // refVal refers to (is another name for) ival
    // int &refVal2;       // error: a reference must be initialized
    std::cout << refVal << std::endl;
    ival = 2000;
    std::cout << refVal << std::endl;
    ival = 3000;
    std::cout << refVal << std::endl;
    refVal = 4000;
    std::cout << refVal << std::endl;
    std::cout << ival << std::endl;
    double &refVal2 = refVal;
    std::cout << refVal2 << std::endl;
    return 0;
}