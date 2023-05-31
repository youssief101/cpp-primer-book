#include <iostream>

int main() {
    int i = 42;
    const int ci = i;   // ok: the value in i is copied into ci
    int j = ci;         // ok: the value in ci is copied into j
    return 0;
}