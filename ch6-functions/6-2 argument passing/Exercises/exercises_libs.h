#ifndef EXERCISES_LIBS
#define EXERCISES_LIBS

#include <iostream>
using std::cout; using std::endl;

#include <array>
using std::begin; using std::end;

#include <cctype>
using std::tolower;

#include <string>
using std::string;

int check_upper(const string &s) {
    unsigned int ctr{0};
    /* determine whether a string contains any capital letters */
    for (size_t i{0}; i < s.size(); ++i) {
        if (isupper(s[i])) {
            ++ctr;
        }
    }
    return ctr;
}

void to_lower(string &s) {
    /* change a string all to lowercase */
    for (size_t i{0}; i < s.size(); ++i) {
        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
    }
}

void swap(int *ip1, int *ip2) {
    // swap two ints
    int temp = *ip1;
    *ip1 = *ip2;
    *ip2 = temp;
}

void reset(int &ivar) {
    /* a function that takes a reference and sets the referenced-to value to zero */
    ivar = 0;
}

bool is_larger(const int ival1, const int *iptr) {
    // check which int is larger
    return ival1 > *iptr ? true : false; 
}

void swap_ptr(int* &ptr1, int* &ptr2) {
    // a function swaps to int pointers, uses reference to a pointer
    int *tempptr = ptr1;
    ptr1 = ptr2;
    ptr2 = tempptr;
}

void print(const char *cp) {
    // print c type string
    if (cp) // cp is not a null ptr
        while (*cp) // so long as the caracter it points to is not a null char
            cout << *cp++;
        cout << endl;
}

void print(const int *beg, const int *end) {
    // print an array
    while (beg != end) {
        cout << *beg++ << " ";
    }
    cout << endl;
}

void print_array(const int* arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << std::endl;
    }
}

#endif // EXERCISES_LIBS