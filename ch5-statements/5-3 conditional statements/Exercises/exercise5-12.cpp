/*
    Modify our vowel-counting program so that it counts the number of 
    occurrences of the following two-character sequences:  ff,  fl, and  fi. 
*/
#include <iostream>
using std::cout; using std::endl; using std::cin;

#include <string>
using std::string;

int main() {
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned tabCnt = 0, spaceCnt = 0, newlineCnt = 0;
    unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
    string input;
    cout << "Enter a string (including new lines): ";
    while (getline(cin, input, '\n')) {
        for (size_t i{0}; i < input.size(); ++i) {
            switch (input[i]) {
                case 'a' : case 'A':
                    ++aCnt;
                    break;
                case 'e' : case 'E':
                    ++eCnt;
                    break;
                case 'i' : case 'I':
                    ++iCnt;
                    break;
                case 'o' : case 'O':
                    ++oCnt;
                    break;
                case 'u' : case 'U':
                    ++uCnt;
                    break;
                case '\t':
                    ++tabCnt;
                    break;
                case ' ':
                    ++spaceCnt;
                    break;
                case 'f':
                    if (i + 1 < input.size()) {
                        switch (input[i+1]) {
                            case 'f':
                                ++ffCnt;
                                break;
                            case 'l':
                                ++flCnt;
                                break;
                            case 'i':
                                ++fiCnt;
                                break;
                            default:
                                break;
                        }
                    }
                default:
                    break;
            }
        }
    }

    // print results
    cout << "vowel a: " << aCnt << "\n"
         << "vowel e: " << eCnt << "\n"
         << "vowel i: " << iCnt << "\n"
         << "vowel o: " << oCnt << "\n"
         << "vowel u: " << uCnt << "\n"
         << "ff: " << ffCnt << "\n"
         << "fl: " << flCnt << "\n"
         << "fi: " << fiCnt << "\n"
         << "tab count: " << tabCnt << "\n"
         << "space count: " << spaceCnt << "\n"
         << "newline count: " << newlineCnt << endl;

    return 0;
}