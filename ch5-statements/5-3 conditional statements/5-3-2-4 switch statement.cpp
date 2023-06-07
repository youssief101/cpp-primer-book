/*
    if the code that is skipped includes a variable definition inside a switch statement that is illegal
    to jump from place where that variable with an initializer is out of scope to place where that variable 
    is in scope
*/

#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <string>
using std::string;

string get_file_name() {
    string filename;
    return cin >> filename, filename;
}

int main() {
    bool answer = true;
    // uncomment to find bugs
    switch (answer) {
        /*
        case true:
            // this switch staatement is illegal because these initializations might be bypassed
            string file_name;   // error: control bypasses an implicitly initialized variable
            int ival = 0;       // error: control bypasses an explicitly initialized variable
            int jval;
            break;
        case false:
            // ok jval is in scope but is uninitialized
            jval = next_num();  // ok assign a vlue to jval
            if (file_name.empty())  // file_name is in scope but wasn't initialized!
                // ...
        */
        case true:
            {
                // ok: declaration statement within a statement block
                string file_name = get_file_name();
            }
            break;
        // uncomment to find the bug
        /*
        case false:
                if (file_name.empty()) // error file_name is not in scope
        */
    }

    return 0;
}