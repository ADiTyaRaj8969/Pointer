// Topic: Copy string using pointers (no strcpy)
#include <iostream>
using namespace std;

int main()
{
    const char* src = "pointer demo";
    char dst[50];
    const char* s = src;
    char* d = dst;
    while (*s)
    {
        *d++ = *s++;
    }
    *d = '\0';
    cout << "Copied: " << dst << '\n';
    return 0;
}

// Time Complexity: O(n) where n is the length of the source string (single pass copy).
// Space Complexity: O(1) additional space (destination buffer provided on stack).
