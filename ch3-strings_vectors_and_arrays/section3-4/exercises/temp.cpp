#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s{"youssef"};
    string::iterator it2;
    for (it2 = s.begin(); it2 != s.end(); it2++) {
        cout << *it2 << " ";
    }
    cout << endl;
    return 0;
}