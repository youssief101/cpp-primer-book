/*
    Rewrite the grade clustering program from § 3.3.3 (p. 104) using iterators 
    instead of subscripts
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // without iterators
    // count the number of grades by clusters of ten: 0--9, 10--19, . .. 90--99, 100
    vector<unsigned> uvec(11, 0);
    unsigned grade;
    while (cin >> grade) {
        auto iteruvec = uvec.begin();
        iteruvec += grade / 10;
        ++(*iteruvec);
    }
    for (auto iter = uvec.begin(); iter != uvec.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}