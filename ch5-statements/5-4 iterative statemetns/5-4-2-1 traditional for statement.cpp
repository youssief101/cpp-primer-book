#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

int main() {
    // process characters in s until we run out of characters or we hit a whitespace
    string s{"some value"};
    for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index) {
        s[index] = toupper(s[index]);   // capitalize the current character
    }
    cout << s << endl;
    return 0;
}