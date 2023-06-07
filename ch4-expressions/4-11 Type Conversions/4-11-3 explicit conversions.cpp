#include <iostream>
using std::cout; using std::endl;

int main() {
    int i{20}, j{13};
    // explicit conversion of an integer to a double type
    double slope = static_cast<double>(i) / j;
    cout << slope << endl;

    // explicit conversion from pointer void* to pointer to a double
    // !!! if d is other type it will cause undefined behaviour
    double d{0};
    void *p = &d;
    // ok: converts void* back to the original pointer type
    double *dp = static_cast<double *>(p);
    *dp = 30;
    cout << d << endl;
    return 0;
}