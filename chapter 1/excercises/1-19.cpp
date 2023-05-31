#include <iostream>

int main() {
    int num1{0}, num2{0};
    while (std::cin >> num1 >> num2) {
        if (num2 > num1) {
            while (num1 <= num2) {
                std::cout << num1 << std::endl;
                ++num1;
            }
            return 0;
        }
        else {
            std::cout << "first number must be smaller than second one" << std::endl;
        }
    }
}