#include <iostream>
#include <cstdlib>

int main() {
    int *p1 = nullptr;  // equivalent to int *p1 = 0;
    int *p2 = 0;        // directly initializes p2 from the literal constant 0
    int *p3 = NULL;     // equivalent to int *p3 = 0;
    return 0;
}