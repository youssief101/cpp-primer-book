/*
    As an example of using the bitwise operators let’s assume a teacher has 30 students
    in a class. Each week the class is given a pass/fail quiz. We’ll track the results
    of each quiz using one bit per student to represent the pass or fail grade on a
    given test. We might represent each quiz in an  unsigned  integral value:
*/

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    unsigned long quiz1 = 0; //  we’ll use this value as a collection of bits
    1UL << 27;               // generate a value iwth only bit number 27 passed
    quiz1 |= 1UL << 27;      // equivalent to quiz1 = quiz1 | 1UL << 27;

    /*
        Imagine that the teacher reexamined the quiz and discovered that student 27
        acutally failed the test. The teacher must now turn off bit 27. This time we
        need an integer that has bit 27 turned off and all the other bits turned on.
    */
    quiz1 &= ~(1UL << 27); // student number 27 failed

    bool status = quiz1 & (1UL << 27); // how did student number 27 do?
    return 0;
}