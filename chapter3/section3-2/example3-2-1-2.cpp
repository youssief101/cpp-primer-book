#include <iostream>
using namespace std;
#include <string>

int main() {
    // Initializations from page 43
    int units_sold = 0;     // copy initialization
    int units_sold1 = {0};   // uniform copy initialization
    int units_sold2{0};      // direct initialization
    int units_sold3(0);      // direct initialization

    // Initializations from page 84
    string s5 = "hiya";     // copy initialization
    string s6("hiya");      // direct initialization
    string s7(10, 'c');     // direct initialization; s7 is cccccccccc

    // indirectly using the copy initialization
    string s8 = string(10, 'c');    // copy initialization; s8 is cccccccccc


    cout << s5 << "\n" << s6 << "\n" << s7 << "\n" << s8 << endl;
    return 0;
}