/*
    Write a program using a series of if statements to count the number of vowels in text read form cin
*/
#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <string>
using std::string;

int main() {
    unsigned aCnt{0}, eCnt{0}, iCnt{0}, oCnt{0}, uCnt{0};
    string userInput;
    getline(cin, userInput);
    for (char c : userInput) {
        if (c == 'a')
            ++aCnt;
        else if (c == 'e')
            ++eCnt;
        else if (c == 'i')
            ++iCnt;
        else if (c == 'o')
            ++oCnt;
        else if (c == 'u')
            ++uCnt;
    }
    cout << "vowel a: " << aCnt << "\n"
         << "vowel e: " << eCnt << "\n"
         << "vowel i: " << iCnt << "\n"
         << "vowel o: " << oCnt << "\n"
         << "vowel u: " << uCnt << endl;
    return 0;
}