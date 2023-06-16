// Write your own versions of each of the  print  functions presented in 
// this section. Call each of these functions to print  i  and  j  
// defined as follows: 
// int  i =  0,  j[2] = {0,  1}

#include "exercises_libs.h"

int main() {
    char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; 
    print(str);
    print(begin(arr), end(arr));
    return 0;
}