#include <iostream>
using namespace std;
#include <string>

int main() {
    // prints to the ouput stream only if the size of line is more than 80 chars
    string line;
    while (getline(cin, line)) {
        if (line.size() > 80) { 
            cout << line << endl;
        }
    }
    return 0;
}