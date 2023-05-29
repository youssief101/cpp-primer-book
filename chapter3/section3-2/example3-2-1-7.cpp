#include <iostream>
using namespace std;
#include <string>

int main() {
    string line;
    // read input a line at a time until end-of-file
    while (getline(cin, line)) {
        cout << line << endl;   // endl to end the current line and flush the buffer
    }
    return 0;
}