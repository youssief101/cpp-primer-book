#include <iostream>
using namespace std;
#include <string>
#include <cctype>

int main() {
    const string hexdigits{"0123456789ABCDEF"}; // possible hex digits
    cout << "Enter a series of numbers between 0 and 15"
        << " separated by spaces. Hit ENTER when finished: "
        << endl;
    string result;  // will hold the resulting hex string
    string::size_type n;   // fetch the indicated hex digit
    while (cin >> n) {
        if (n < hexdigits.size()) {
            result += hexdigits[n];
        }
    }
    cout << "Your hex number is: " << result << endl;
    return 0;
}