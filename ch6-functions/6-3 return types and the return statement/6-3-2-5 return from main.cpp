#include <iostream>
#include <cstdlib>

int main() {
    int i{0};
    if (i)
        return EXIT_FAILURE; // defined in cstdlib
    else
        return EXIT_SUCCESS; // defined in cstdlib
    // Note: these are preprocessor values, we must not precede them with std::
}