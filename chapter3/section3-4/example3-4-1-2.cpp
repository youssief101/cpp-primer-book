using namespace std;
#include <iostream>
#include <string>

int main() {
    string s{"some string"};
    if (s.begin() != s.end()) { // make sure that s is not empty
        auto it = s.begin();    // it denotes the first character in s
        *it = toupper(*it); // make that character uppercase
    }
    cout << s << endl;
    return 0;
}