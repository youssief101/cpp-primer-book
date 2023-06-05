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
    for (auto it = text.begin(); it != text.end() && !it -> empty(); it++) {
        for (auto it2 = it -> begin(); it2 != it -> end(); it2++) {
            *it2 = toupper(*it2);
            cout << *it2 << " ";
        }
    }
    cout << endl;
    return 0;
}