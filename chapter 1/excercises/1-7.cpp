#include <iostream>

int main() {
    /*
     * a program that prompt the user to input two numbers.
     * then add them to each others
     */

    std::cout << "Enter two numbers to add:" << std::endl;
    // define variables
    int n1 = 0, n2 = 0;
    std::cin >> n1 >> n2;
    // give results
    std::cout << "the addition of " << n1 << " and " << n2 << " is " << n1 + n2 << std::endl; 
}