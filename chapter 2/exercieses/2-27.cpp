#include <iostream>

int main() {
    int i{20};
    const int i2 = i;
    const int &r = i;
    std::cout << r << std::endl;
    i = 50;
    std::cout << r << std::endl;
    return 0;
}