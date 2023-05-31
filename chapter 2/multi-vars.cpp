#include <iostream>

int main() {
    int *p;     // legal but might be missleading
    int *p1, p2; // p1 is a pointer to int; p2 is an int, because it does not have the *
    int *ip1, *ip2; // both ip1, ip2 are pointers to an int
    return 0;
}