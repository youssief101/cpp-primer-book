#ifndef STRING_CHECK_H
#define STRING_CHECK_H

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

#endif // STRING_CHECK_H