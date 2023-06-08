#include <iostream>
using std::cout; using std::endl; using std::cin;

#include <string>
using std::string;

int get_foo() {
    int userInput{0};
    return cin >> userInput, userInput;
}

int main() {
    // repeatedly ask the user for a pair of numbers to sum
    string rsp; // used in condition; can't be defined inside the do
    do {
        cout << "please enter two values: ";
        int val1 = 0, val2 = 0;
        cin >> val1 >> val2;
        cout << "The sum of " << val1 << " and " << val2 << " = " << val1 + val2
             << "\n\n"
             << "More? Enter yes or no: ";
        cin >> rsp;
    } while (!rsp.empty() && rsp[0] != 'n');

    /*
        Note: because the condition is not evaluated until after the statement or block is executed,
        the do while loop does not allow variable definitions inside the condition:

        if we could define variables in the condition, then any use of the variable would happen
        before the vairable was defined!
    */
    /*
    do {
        // ...
    } while (int foo = get_foo());  // error declaration in a do condition
    */
    return 0;
}