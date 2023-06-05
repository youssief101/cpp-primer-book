#include <iostream>
using namespace std;
#include <string>
#include <vector>

int main() {
    string word;    // empty string
    vector<string> text;    // empty vector
    while (cin >> word) {
        text.push_back(word);   // append word to text
    }
    for (auto s : text) {
        cout << s + " ";
    }
    return 0;
}