#include <iostream>
using std::cout;
using std::endl;

int main()
{
    unsigned char bits = 'q';
    auto result = ((~bits) << 6);
    cout << result << endl;
    return 0;
}