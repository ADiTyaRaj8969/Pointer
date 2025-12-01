// Topic: Find length of a string using pointer arithmetic (no strlen)
// Description: Walk pointer until '\0'
#include <iostream>
using namespace std;

int main()
{
    const char* s = "hello world";
    const char* p = s;
    while (*p) ++p;
    cout << "Length: " << (p - s) << '\n';
    return 0;
}
