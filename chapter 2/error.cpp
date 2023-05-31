#include <iostream>

int main() {
    int zero{0};
    int *pi = zero; // error: cannot assign an int to a pointer
    return 0;
}