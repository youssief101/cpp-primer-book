#include <iostream>
using namespace std;
#include <string>
#include <cctype>

int main()
{
    string s{"some string"};
    // process characters in s until we run out of characters or we hit a whitespace
    for (decltype (s.size()) index = 0; s[index] != s.size() && !isspace(s[index]); index++) {
        s[index] = toupper(s[index]);
    }
    cout << s << endl;
    return 0;
}