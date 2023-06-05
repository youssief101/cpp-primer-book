#include <iostream>

int main() {
    // (a)
    int *ip, i, &r = i;
    // ip is a pointer to integer
    // i is an integer
    // r is a reference to integer initialized to i

    // (b)
    int i, *ip = 0;
    // i is an integer
    // ip is a pointer with a null value

    // (c)
    int *ip, ip2;
    // ip is a pointer to integer
    // ip2 is an integer
    return 0;
}