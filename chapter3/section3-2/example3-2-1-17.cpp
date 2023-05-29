#include <iostream>
using namespace std;
#include <string>
#include <cctype>

int main() {
    // isalpha(c)
    string s1{"Hello 1, world"};
    for (auto c : s1) {
        if (isalpha(c)) {
            cout << "the character " << c << " is alphabetical" << endl;
        } else {
            cout << "the character " << c << " is not alphabetical" << endl;
        }
    }

    // isalnum(c)
    string s2{"Hello 1, world"};
    for (auto c : s2) {
        if (isalnum(c)) {
            cout << "the character " << c << " is alpha or digit!" << endl;
        } else {
            cout << "the character " << c << " is not alpha or digit!" << endl;
        }
    }

    // iscntr1(c)
    string s3{"hello\tworld\tmyname\nis\tyoussef\n"};
    for (auto c : s3) {
        if (iscntrl(c)) {
            cout << c << " is a control character." << endl;
        } else {
            cout << c << " is not a control character." << endl;
        }
    }
    
    // isdigit(c)
    string s4{"Hello1234523"};
    for (auto c : s4) {
        if (isdigit(c)) {
            cout << c << " is digit." << endl;
        } else {
            cout << c << " is not a digit" << endl;
        }
    }

    // isgraph(c)
    string s5{"am I printable?"};
    for (auto c : s5) {
        if (isgraph(c)) {
            cout << c << " has a graphical representation." << endl;
        } else {
            cout << c << " has no graphical representation." << endl;
        }
    }

    // islower(c)
    string s6{"iamnotUPPERCASE"};
    for (auto c : s6) {
        if (islower(c)) {
            cout << c << " is a lowercase character." << endl;
        } else {
            cout << c << " is an uppercase character." << endl; 
        }
    }

    // isprint(c)
    string s7{"iam a tab \t iam a new line \n i am nothing '"};
    for (auto c: s7) {
        if (isprint(c)) {
            cout << c << " character is printable." << endl;
        } else {
            cout << c << " character is not printable." << endl;
        }
    }

    // ispunct(c)
    string s8{"Hello, World !!?"};
    for (auto c : s8) {
        if (ispunct(c)) {
            cout << c << " is a punctuation." << endl;
        } else {
            cout << c << " is not a punctutation." << endl;
        }
    }

    // isspace(c)
    string s9{"  \n  \t  hello;"};
    for (auto c : s9) {
        if (isspace(c)) {
            cout << c << " is a space character." << endl;
        } else {
            cout << c << " is not a space character." << endl;
        }
    }

    // isupper(c)
    string s10{"myNameIsYoussef Mokhjtar"};
    for (auto c : s10) {
        if (isupper(c)) {
            cout << c << " is an uppercase letter." << endl;
        } else {
            cout << c << " is a lowercase letter." << endl;
        }
    }

    // isxdigit(c)
    string s11{"ABCDE!123D"};
    for (auto c : s11) {
        if (isxdigit(c)) {
            cout << c << " is a hexadecimal digit." << endl;
        } else {
            cout << c << " is not a hexadecimal digit." << endl;
        }
    }

    // tolower()
    string s12{"youssef Mohamed MOKHTAR"};
    for (auto c : s12) {
        cout << static_cast<char>(tolower(c));
    }
    cout << endl;

    // toupper()
    string s13{"youssef mohamed mokhtar"};
    for (auto c : s13) {
        cout << static_cast<char>(toupper(c));
    }
    cout << endl;
    return 0;
}