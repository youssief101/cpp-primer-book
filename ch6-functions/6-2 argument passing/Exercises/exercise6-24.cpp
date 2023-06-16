#include "exercises_libs.h"

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    print_array(arr, size);
    return 0;
}