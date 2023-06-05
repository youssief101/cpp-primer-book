/*
    read a sequence of words from cin and store the values a vector. 
    After you’ve read all the words, process the vector and change each word 
    to uppercase. Print the transformed elements, eight words to a line.
*/

using namespace std;
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int main() {
    string word;
    vector<string> svec;
    while (cin >> word) {
        svec.push_back(word);
    }
    // get into the vector
    for (int i{0}; i < svec.size(); i++) {
        // get into each word in the vector
        for (auto &c : svec[i]) {
            c = toupper(c);
        }
    }
    int counter{0};
    for (int i{0}; i < svec.size(); i++) {
        if (i % 8 == 0) {
            cout << endl;
        }
        cout << svec[i] << " ";
    }
    return 0;
}