#include <iostream>

int main() {
    constexpr int null = 0;
    const int *p = &null;
    std::cout << p << std::endl;
    return 0;
}