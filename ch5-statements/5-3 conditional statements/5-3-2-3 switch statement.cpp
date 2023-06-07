/*
    Sometimes we have two or more values that share a common set of actions.
    In such instance, we omit a break statement, allowing the program to fall through multiple case labell.
*/

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main() {
    unsigned otherCnt{0};  // indicate that no case is executed!
    unsigned vowelCnt = 0;
    char ch;
    while (cin >> ch) {
        switch (ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                ++vowelCnt;
                break;
            default:
                ++otherCnt;
                break;
        }   
    }
    cout << "total number of vowels is: " << vowelCnt << endl;
    cout << "total number of non-vowels is: " << otherCnt << endl;

    return 0;
}