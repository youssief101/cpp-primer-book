#include <iostream>
using namespace std;
#include <string>

int main()
{
    string user_input;
    cin >> user_input;
    for (int i{0}; i < user_input.size(); i++)
    {
        user_input[i] = 'X';
    }
    cout << user_input << endl;
    return 0;
}