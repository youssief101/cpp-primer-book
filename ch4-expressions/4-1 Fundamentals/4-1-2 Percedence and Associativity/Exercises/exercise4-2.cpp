#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> ivec = {10, 20, 30, 40, 50};
    cout << (*(ivec.begin())) << endl;       // prints 10
    cout << ((*(ivec.begin())) + 1) << endl; // prints 11
    return 0;
}