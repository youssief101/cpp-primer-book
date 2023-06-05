using namespace std;
#include <string>
#include <vector>

int main() {
    vector<string> v1{"a", "an", "the"};    // list initialization
    vector<string> v2("a", "an", "the");    // error, we've to use curly braces
    return 0;
}