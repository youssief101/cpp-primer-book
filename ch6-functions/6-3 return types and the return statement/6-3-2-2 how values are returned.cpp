#include <iostream>
#include <string>
using namespace std;

// return the pluarl version of word if ctr is greater than 1
string make_plural(size_t w1Size, size_t w2Size , const string &word, const string &ending) {
    return ((w1Size > 1) && (w2Size)) ? word + ending : word;
}

//  return a reference to the shorter of two strings 
const string &shorterString(const string &s1, const string &s2) {
    return s1.size() <= s2.size() ? s1 : s2;
}

int main() {
    string w1{"ahmed"}, w2{"khaled"};
    cout << make_plural(w1.size(), w2.size(), w1, w2) << endl;
    shorterString(w1, w2);
    // The parameters and return type are references to  const string. The  strings 
    // are not copied when the function is called or when the result is returned.
    return 0;
}