#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    /*
        using the prefix increment operator in such a loop will
        ignore the first element in the loop, and print wrong outputs like -10
    */
    vector<int> ivec{10, 20, 30, 40, 50, -10, -20, 30};
    auto pbeg = ivec.begin();
    // print elements up to the first negative value
    while (pbeg != ivec.end() && *pbeg >= 0)
    {
        cout << (*(++pbeg)) << endl; // print the current value and advance pbeg
    }
    return 0;
}