/*
    Revise your program to throw an exception if the second number is 
    zero. Test your program with a zero input to see what happens on your system if you 
    don’t  catch  an exception. 
*/

#include <iostream>
using std::cout; using std::cin; using std::endl;

#include <stdexcept>
using std::runtime_error;
int main() {
    float i1{0}, i2{0};

    // read inputs from the user
    cin >> i1 >> i2;

    // divide i1 by i2
    if (i2 == 0) 
        throw runtime_error("dividing by zero is wrong!");

    double result = i1 / i2;

    // print the result to the user
    cout << result << endl;

    return 0;
}