#include <iostream>
using namespace std;
#include <string>

int main() {
    string user_input;
    cin >> user_input;
    int i{0};
    while (i < user_input.size()) {
        user_input[i] = 'X';
        i++;
    }
    cout << user_input << endl;
    return 0;
}