/*
    Write a program that reads two integers from the standard input and 
    prints the result of dividing the first number by the second. 
*/

#include <iostream>
using std::cout; using std::cin; using std::endl;

int main() {
    float i1{0}, i2{0};

    // read inputs from the user
    cin >> i1 >> i2;

    // divide i1 by i2
    double result = i1 / i2;

    // print the result to the user
    cout << result << endl;

    return 0;
}