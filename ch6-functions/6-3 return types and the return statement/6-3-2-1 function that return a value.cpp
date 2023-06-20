#include <iostream>
#include <string>
using namespace std;

// incorrect return values, this code will not compile!
bool str_subrange(const string &str1, const string &str2) {
    // same sizes: return normal equality test
    if (str1.size() == str2.size())
        return str1 == str2; // ok: == return bool
    else{
        // find the size of the smaller string; conditional operator
        auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
        //  look at each element up to the size of the smaller string
        for (size_t i{0}; i != size; ++i) {
            if (str1[i] != str2[i])
                return; // error#1: no return value; compiler should detect this error
        }
        //  error #2: control might flow off the end of the function without a return 
        //  the compiler might not detect this error 
    }
}

int main() {
    string sval1{"ahmed"}, sval2{"ali"};
    if (str_subrange)
        cout << "strings are commons" << endl;
    else 
        cout << "strings are totally different" << endl;
}