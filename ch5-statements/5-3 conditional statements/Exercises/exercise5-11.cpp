/*
    Modify our vowel-counting program so that it also counts the number 
    of blank spaces, tabs, and newlines read.
*/
#include <iostream>
using std::cout; using std::endl; using std::cin;

#include <string>
using std::string;

int main() {
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned tabCnt = 0, spaceCnt = 0, newlineCnt = 0;
    string input;
    cout << "Enter a string (including new lines): ";
    while (getline(cin, input, '\n')) {
        for (char ch : input) {
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
                case '\t':
                    ++tabCnt;
                    break;
                case ' ':
                    ++spaceCnt;
                    break;
                default:
                    break;
            }
        }
        ++newlineCnt; // Increment newline count for each line
    }

    cout << "vowel a: " << aCnt << "\n"
         << "vowel e: " << eCnt << "\n"
         << "vowel i: " << iCnt << "\n"
         << "vowel o: " << oCnt << "\n"
         << "vowel u: " << uCnt << "\n"
         << "tab count: " << tabCnt << "\n"
         << "space count: " << spaceCnt << "\n"
         << "newline count: " << newlineCnt << endl;

    return 0;
}
