#include <iostream>
// using declaration: when we use the name cin, we get the one from the namespace
using std::cin;

int main() {
    int i;
    cin >> i;   // ok: cin is a synonym for std::cin
    cout << i;  // error: no using delcaration; we must use the full name
    std::cout << i; // ok:explicity use cout from namespace std
    return 0;
}