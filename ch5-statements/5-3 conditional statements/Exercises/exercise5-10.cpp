/*
    Write a program that counts both lower- and uppercase letters as the appropriate 
    vowel—that is, your program should count both ’a’  and ’A’  as part of  aCnt, and so forth.
*/

#include <iostream>
using std::endl; using std::cin; using std::cout;

#include <string>
using std::string;

int main() {
    // initializing counters
    unsigned aCnt{0}, eCnt{0}, iCnt{0}, oCnt{0}, uCnt{0};
    // get input from the user
    char ch;
    while (cin >> ch) {
        switch (ch) {
            case 'a' | 'A':
                ++aCnt;
                break;
            case 'e' | 'E':
                ++eCnt;
                break;
            case 'i' | 'I':
                ++iCnt;
                break;
            case 'o' | 'O':
                ++oCnt;
                break;
            case 'u' | 'U':
                ++uCnt;
                break;
            default:
                break;
        }
    }

    // print results
    cout << "vowel a: " << aCnt << "\n"
         << "vowel e: " << eCnt << "\n"
         << "vowel i: " << iCnt << "\n"
         << "vowel o: " << oCnt << "\n"
         << "vowel u: " << uCnt << endl;

    return 0;
}