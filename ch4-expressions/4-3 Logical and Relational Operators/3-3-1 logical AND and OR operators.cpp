#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    vector<string> text = {"youssef", "", "ahmed", "", "emad.", "khaled", "mohamed", "morsy"};
    /*
        check that index has not reached the end of its associated string.
        Print the strings, add newline after each emtpy string or after a
        string that ends with a period.
    */
    for (const auto &s : text)
    {
        cout << s;
        if (s.empty() || s[s.size() - 1] == '.')
        {
            cout << endl;
        }
        else
        {
            cout << " "; // otherwise just separate with a space
        }
    }
    return 0;
}