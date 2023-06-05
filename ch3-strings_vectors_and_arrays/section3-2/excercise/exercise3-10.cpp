#include <iostream>
using namespace std;
#include <string>
#include <cctype>

int main() {
    string user_input;
    cin >> user_input;
    for (auto &c : user_input) {
        if (ispunct(c)) {
            c = ' ';
        }
    }
    cout << user_input << endl;
    return 0;
}