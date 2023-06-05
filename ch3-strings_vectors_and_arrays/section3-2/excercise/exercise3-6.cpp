#include <iostream>
using namespace std;
#include <string>

int main() {
    string user_input;
    cin >> user_input;
    for (char &c : user_input) {
        c = 'X';
    }
    cout << user_input << endl;
    return 0;
}