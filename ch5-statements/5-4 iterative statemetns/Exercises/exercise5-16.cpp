/*
    Given two  vectors of  ints, write a program to determine whether 
    one  vector  is a prefix of the other. For  vectors of unequal length, compare the num-
    ber of elements of the smaller  vector. For example, given the  vectors containing  0, 
    1,  1, and  2  and  0,  1,  1,  2,  3,  5,  8, respectively your program should return  true.
*/

#include <iostream>
using std::cout; using std::endl; using std::cin;

#include <vector>
using std::vector;

int main() {
    vector<int> ivec1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> ivec2 = {1, 2, 3, 4, 5, 6};
    
    // if vectors has equal size
    if (ivec1.size() == ivec2.size()) {
        for (size_t i{0}; i < ivec1.size(); ++i) {
            if (ivec1[i] == ivec2[i]) {
                ; // no work to do
            } else {
                cout << "vector1 isn't a prefix of vector2" << endl;
                return 0;
            }
        }
        cout << "vector1 is a prefix of vector2" << endl;
    // if vector1 is smaller than vector2
    } else if (ivec1.size() < ivec2.size()) {
        for (size_t i{0}; i < ivec1.size(); ++i) {
            if (ivec1[i] == ivec2[i]) {
                ; // no work to do
            } else {
                cout << "vector1 isn't a prefix of vector2" << endl;
                return 0;
            }
        }
        cout << "vector1 is a prefix of vector2" << endl;
    // if vector2 is smaller than vector1
    } else {
        for (size_t i{0}; i < ivec2.size(); ++i) {
            if (ivec1[i] == ivec2[i]) {
                ; // no work to do
            } else {
                cout << "vector2 isn't a prefix of vector1" << endl;
                return 1;
            }
        }
        cout << "vector2 is a prefix of vector1" << endl;
    }
}