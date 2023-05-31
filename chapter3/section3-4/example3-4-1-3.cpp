using namespace std;
#include <iostream>
#include <string>

int main() {
    string name{"youssef"};
    if (name.begin() != name.end()) {
        auto iter  = name.begin();
        *iter = toupper(*iter);
    }
    cout << name << endl;
    return 0;
}