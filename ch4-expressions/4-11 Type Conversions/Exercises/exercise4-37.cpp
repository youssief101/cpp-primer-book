#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

int main() {
    int i;  double d;   const string *ps;   char *pc;   void *pv;
    /*
        pv = (void*)ps;
    */
    pv = static_cast<void *>(const_cast<string *>(ps));
    /*
        i = int(*pc);
    */
    // it shows error but that what old style do, if neither cast is legal then it casts a reinterpret_cast
    // uncomment to see the solution!
    // i = reinterpret_cast<int>(*pc); 
    /*
        pv = &d
    */
    pv = static_cast<void *>(&d);
    /*
        pc = (char*) pv;
    */
    pc = static_cast<char *>(pv);       
    return 0;
}