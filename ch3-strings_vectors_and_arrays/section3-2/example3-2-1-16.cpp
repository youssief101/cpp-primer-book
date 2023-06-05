#include <iostream>
using namespace std;
#include <string>

int main() {
    string s{"Hello World!!!"};
    decltype (s.size()) punct_cnt{0};
    for (auto c : s) {
        if (ispunct(c)) {
            punct_cnt ++;
        }
    }
    cout << punct_cnt << " punctuations characters in " << s << endl;
    return 0;
}