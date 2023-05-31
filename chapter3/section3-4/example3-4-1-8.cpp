#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // print each line in text up to the first blank line
    vector<string> text{"ahmed", "rami", "khaled"};
    for (auto it = text.cbegin(); it != text.cend() && !it -> empty(); it++) {
        cout << *it << endl;
    }
    return 0;
}