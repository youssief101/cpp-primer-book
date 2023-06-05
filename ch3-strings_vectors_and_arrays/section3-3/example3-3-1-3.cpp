#include <iostream>
using namespace std;
#include <string>
#include <vector>

int main() {
    // list initialization
    vector<string> articles = {"a", "an", "the"};
    for (int i{0}; i < articles.size(); i++) {
        cout << articles[i] << endl;
    }
    return 0;
}