#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    string s{"some string"};
    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
    {
        *it = toupper(*it); // capitalize the current character
    }
    cout << s << endl;

    /*
        becuase the increment and decrement operators change their operands,
        its easy to misue these oprators in compound expressions
    */
    auto beg = s.begin();
    while (beg != s.end() && !isspace(*beg))
    {
        *beg = toupper(*beg++); // error: this assignment is undefined
    }
    cout << s << endl;
    return 0;
}