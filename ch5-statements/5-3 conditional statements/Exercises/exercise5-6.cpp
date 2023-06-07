#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main() {
    int grade{0};
    string result{""};
    const vector<string> grades = {"F", "D", "C", "B", "A", "A++"};
    while (cin >> grade) {
        // assign result
        result = (grade < 60) ? grades[0] : grades[(grade - 50) / 10];
        result += (grade != 100) ? ((grade % 10 == 0) ? ((grade % 10 > 7) ? "+" : ((grade % 10 < 3) ? "-" : "")) : "") : "";
        cout << result << endl;
    }

    return 0;
}