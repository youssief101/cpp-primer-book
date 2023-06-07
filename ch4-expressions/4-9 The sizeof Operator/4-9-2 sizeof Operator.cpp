#include <iostream>
using std::cout; using std::endl;

#include <cstddef>

int main() {
    // sizeof(ia) / sizeof(*ia) returns the number of elements in ia
    int ia[] = {10, 20, 30, 40, 50};
    constexpr size_t sz = sizeof(ia) / sizeof(*ia);
    int arr2[sz]; // ok sizeof returns a constant expression
    cout << "size of ia: " << sizeof(ia) << endl;
    cout << "size of first element in ia: " << sizeof(*ia) << endl;
    cout << "sz is equal to: " << sz << endl;
    return 0;
}