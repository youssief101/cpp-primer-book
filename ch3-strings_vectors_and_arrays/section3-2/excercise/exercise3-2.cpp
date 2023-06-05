/*
    write a program to read the standard input a line at a time. Modify
    your program to read a word at a time
*/

#include <iostream>
using namespace std;
#include <string>

int main() {
    // read a line at a time
    string line;
    string userInput;
    while (getline(cin, line)) {
        cout <<  line << endl;
    }

    // read a word at a time
    while (cin >> userInput) {
        cout << userInput << endl;
    }
    return 0;
}