#include <iostream>
using namespace std;
#include <vector>

int main() {
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade) {
        if (grade < =100) {
        ++scores[grade/10];
        }
    }
    for (auto i : scores) {
        cout << i;
    }
    return 0;
}