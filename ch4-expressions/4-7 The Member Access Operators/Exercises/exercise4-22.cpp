#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    // using the conditional operator
    string finalGrade;
    int grade{0};
    cin >> grade;
    finalGrade = (grade >= 90)                ? "higher pass"
                 : (grade < 90 && grade > 75) ? "pass"
                 : (grade < 75 && grade > 60) ? "lower pass"
                                              : "fail";
    cout << finalGrade << endl;

    // using the if conditional statement
    if (grade >= 90)
    {
        cout << "higher pass" << endl;
    }
    else if (grade < 90 && grade > 75)
    {
        cout << "pass" << endl;
    }
    else if (grade < 75 && grade > 60)
    {
        cout << "low pass" << endl;
    }
    else
    {
        cout << "fail" << endl;
    }
    return 0;
}