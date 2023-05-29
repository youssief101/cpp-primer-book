/*
    print each character in the string "some string" on its own line
*/

#include <iostream>
using namespace std;
#include <string>

int main() {
    string str{"some string"};
    for (auto c : str) {
        cout << c << endl;
    }
    return 0;
}