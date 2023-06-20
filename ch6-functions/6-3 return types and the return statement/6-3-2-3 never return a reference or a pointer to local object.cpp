#include <iostream>
#include <string>
using namespace std;

// disaster this function returns a reference to a local object
const string &manip() {
    string ret;
    // transform ret in some way
    if (!ret.empty())
        return ret; // WRONG: returning a reference to a local object!
    else
        return "Empty"; // WRONG: "Empty" is a local tmeporary string
}
int main() {
    // TODO
    return 0;
}