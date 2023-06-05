#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int userInput{0};
    cin >> userInput;
    if (userInput % 2 == 0)
    {
        cout << userInput << " is even" << endl;
    }
    else
    {
        cout << userInput << " is odd" << endl;
    }
    return 0;
}