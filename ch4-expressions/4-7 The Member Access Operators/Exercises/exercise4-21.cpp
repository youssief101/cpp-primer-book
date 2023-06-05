#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int &num : ivec)
    {
        num = (num & 2 != 0) ? num * 2 : num;
    }

    // print the modified vector
    for (int num : ivec)
    {
        cout << num << " ";
    }
    return 0;
}