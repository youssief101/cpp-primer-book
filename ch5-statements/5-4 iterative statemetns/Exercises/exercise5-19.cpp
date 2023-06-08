/*
    Write a program that uses a  do while  loop to repetitively request two 
    strings from the user and report which  string  is less than the other.
*/

#include <iostream>
using std::endl; using std::cout; using std::cin;

#include <string>
using std::string;

int main() {
    string s1{""}, s2{""}, answer{""};
    do {
        cin >> s1 >> s2;
        if (s1.size() < s2.size()) {
            cout << "string1 is smaller than string2" << endl;
        } else if (s1.size() > s2.size()) {
            cout << "string2 is smaller than string1" << endl;
        } else {
            cout << "strings are equal" << endl;
        }
        cout << "do you want to test strings agian? " << endl;
        cin >> answer;
    } while (!answer.empty() && answer[0] != 'n');
    return 0;
}