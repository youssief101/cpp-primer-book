#include <iostream>
#include <initializer_list>
using namespace std;

void add(initializer_list<int> il) {
    int result{0};
    for (auto elem : il) {
        result += elem;
    }
    cout << result << endl;
}

int main() {
    initializer_list<int> integerList = {1, 2, 3, 4, 5};
    add(integerList);
    return 0;
}