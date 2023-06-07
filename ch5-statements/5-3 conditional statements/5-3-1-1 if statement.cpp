#include <iostream>
using std::cout; using std::endl; using std::cin;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main() {
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    // if grades is less than 60 it's an F, otherwise compute a subscript
    int grade{0};
    string lettergrade{""};
    cin >> grade;
    if (grade < 60)
        lettergrade = scores[0];
    else {  // Note: ommiting the brace here will be WRONG
        lettergrade = scores[(grade - 50) / 10];
        if (grade != 100) 
            if (grade % 10 > 7)
                lettergrade += '+'; // grades ending in 8 or 9 get a +
            else if (grade % 10 < 3) 
                lettergrade += '-'; // grades ending in 0, 1 or 2 get a -
    }
    cout << lettergrade << endl;
    return 0;
}