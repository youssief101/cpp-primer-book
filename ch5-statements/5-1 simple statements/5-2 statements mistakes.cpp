#include <iostream>
using std::cout; using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main() {
    // superfluous null statement
    int ival{0};
    int v1{10};
    int v2{20};
    ival = v1 + v2;
    ; // ok second semicolon is a superfluous null statement
    cout << ival << endl;

    // disaster: extra semicolon: loop body is this null statement
    vector<string> svec = {"ahmed", "rami", "ali", "khaled"};
    vector<string>::iterator iter = svec.begin();
    while (iter != svec.end());   // the while body is empty statement
    ++iter; // increment is not part of the loop
    
    return 0;
}