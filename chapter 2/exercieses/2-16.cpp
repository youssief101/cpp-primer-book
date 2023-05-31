#include <iostream>

int main() {
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    // (a)
    r2 = 3.14159; // valid, r2 of type double it will be assigned to 3.14159
    std::cout << r2 << std::endl;
    // (b)
    r2 = r1; // r2 will be assigned zero, also d
    std::cout << r2 << std::endl;
    std::cout << d << std::endl;
    // (c)
    i = r2; // i will be assigend 0 also r1
    std::cout << i << std::endl;
    std::cout << r1 << std::endl;
    // (d)
    r1 = d; // r1 will be assigned the value 0 also do i
    std::cout << r1 << std::endl;
    std::cout << i << std::endl;
    return 0;
}