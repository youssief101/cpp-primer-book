/*
    a simple example for the binary search algorithm!
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // text must be sorted
    // beg and end will denote the range we're searching
    vector<string> text{"my", "name", "is", "youssef", "mohamed", "mokhtar"};
    auto beg = text.begin(), end = text.end();
    auto mid = text.begin() +  (end - beg) / 2; // original midpoint
    // while there are still elements to look at and we haven't yet found "is"
    while (mid != end && *mid != "is") {
        if ("is" < *mid) {
            end = mid;  // is the element we want in the first half?
        } else { // the element we want is in the second half
            beg = mid + 1;  // start looking with the element just after mid
        }
        mid = beg + (end - beg) / 2; // new mid point
    }
    return 0;
}