#include <iostream>
using namespace std;
#include <string>
#include <cctype>

string capitialize(string user_input);

int main()
{
    string s;
    getline(cin, s);
    s = capitialize(s);
    cout << s << endl;
}

string capitialize(string user_input) {
    if (!user_input.empty()) {
        user_input[0] = toupper(user_input[0]);
        for (int i{1}; i < user_input.size(); i++) {
            if (isspace(user_input[i]) && i + 1 < user_input.size()) {
                    user_input[i+1] = toupper(user_input[i+1]);
            }
        }
    }
    return user_input;
}