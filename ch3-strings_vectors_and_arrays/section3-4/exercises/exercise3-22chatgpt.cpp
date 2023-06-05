/*
    Revise the loop that printed the first paragraph in text to instead
    change the elements in text that correspond to the first paragraph to all uppercase.
    After you’ve updated text, print its contents
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> text{"khaled", "ahmed", "rami", "momen"};
    
    // Change the elements in the first paragraph to uppercase
    auto it = text.begin();
    while (it != text.end() && !it->empty()) {
        for (auto& c : *it) {
            c = toupper(c);
        }
        ++it;
    }
    
    // Print the updated text
    for (const auto& line : text) {
        cout << line << endl;
    }
    
    return 0;
}
