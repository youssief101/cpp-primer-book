#include <iostream>

int main() {
    double dval = 3.14;
    const int &ri = dval; // valid code transfer dval to (int) and assign it to the reference ri
    std::cout << ri << std::endl;
    return 0;
}