#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b && b > c && c > d)
    {
        cout << "the comparison is valid" << endl;
    }
    else
    {
        cout << "comparison is not valid" << endl;
    }
    return 0;
}