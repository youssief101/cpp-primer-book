/*
    Read a set of integers into a vector. Print the sum of each pair of adjacent
    elements. Change your program so that it prints the sum of the first
    and last elements, followed by the sum of the second and second-to-last, and so on.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i;
    vector<int> ivec;
    // Read a set of integers into a vector
    while (cin >> i)
    {
        ivec.push_back(i);
    }
    // Print the sum of each pair of adjacent elements
    for (auto iterBegin = ivec.begin(), iterEnd = ivec.end() - 1; iterBegin <= iterEnd; ++iterBegin, --iterEnd)
    {
        int sum = *iterBegin + *iterEnd;
        cout << sum << " ";
    }
    return 0;
}