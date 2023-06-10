/*
    Revise your program from the previous exercise to use a  try  block to 
    catch  the exception. The  catch  clause should print a message to the user and ask 
    them to supply a new number and repeat the code inside the  try. 
*/

#include <iostream>
using std::cout; using std::cin; using std::endl;

#include <stdexcept>
using std::runtime_error;

int main() {
    float i1{0}, i2{0};

    // read inputs from the user
    while (cin >> i1 >> i2) {
        try {
            // divide i1 by i2
            if (i2 != 0) {
                double result = i1 / i2;
                // print the result to the user
                cout << result << endl;

                return 0; // indicate success
            }
            throw runtime_error("Dividing by zero is mathematically incorrect!");
        } catch (runtime_error err) {
            cout << err.what()
                << "\nTry again? y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;
        }
    }
}