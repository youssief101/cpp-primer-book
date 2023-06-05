#include <iostream>
using std::cout; using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main() {
    vector<string> svec{"ali", "", "ahmed", "", "rami", "", "khaled"};
    // a 
    auto iter = svec.begin();
    while (iter != svec.end()) {
        cout << *iter++ << endl;
    }
    // b
    /* 
        (*iter)++; not valid because it attmeps to dereference iter 
        which yields a string and then increment a string which is 
        invalid 
    */
    // c
    /*
        *iter.empty(); not valid becuase it apply the member empty() 
        to an iter (pointer to a string in a vector) which is invalid
    */
    // d
    while (iter -> empty()) {
        cout << endl;
    }
    
    return 0;
}