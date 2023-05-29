#include <iostream>
using namespace std;
#include <string>

int main() {
    const string s = "keep out!";
    for (auto &c : s) {
        c = 'X';
    }
    cout << s << endl;
    return 0;
}