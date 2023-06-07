#include <iostream>
using std::cout; using std::endl; using std::cin;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main() {
    int grade{0};
    string result{""};
    const vector<string> grades = {"F", "D", "C", "B", "A", "A++"};
    while (cin >> grade) {
        if (grade < 60)
            result = grades[0];
        else {
            result = grades[(grade - 50) / 10]; // fetch the letter grade
        if (grade != 100) { // add + or - only if not already A++
            if (!(grade % 10 == 0)) {
                if (grade % 10 > 7)
                    result += '+'; // grades ending in 8 or 9 get a +
                else if (grade % 10 < 3)
                    result += '-'; // grades ending in 0, 1, or 2 get a -
            }
        }
        }
        cout << result << endl;
    }
    return 0;
}