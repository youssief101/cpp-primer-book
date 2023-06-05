#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int user_input{0};
    while (user_input != 42)
    {
        cin >> user_input;
        cout << "value entred is: " << user_input << endl;
    }
    return 0;
}