#include <iostream>

int main() {
    // std::cin >> int input_value; // uninitialized variable
    // correction
    int input_value{20};
    std::cin >> input_value;

    // int i = {3.14}; // narrowing conversion
    double i{3.14};
    std::cout << i << std::endl;

    // double salary = wage = 9999.99 // uninitialized variable
    double salary{9999.99};
    double wage{salary};
    std::cout << wage << std::endl;

    // int k = 3.14; double to int implicit conversion value will be trucated
    double k{3.14};
    std::cout << k << std::endl;
}