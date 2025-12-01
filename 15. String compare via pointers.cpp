// Topic: Compare two strings using pointers (return 0 if equal)
#include <iostream>
using namespace std;

int strcmp_ptr(const char* a, const char* b)
{
    while (*a && (*a == *b))
    {
        ++a;
        ++b;
    }
    return (unsigned char)*a - (unsigned char)*b;
}

int main()
{
    const char* s1 = "abc";
    const char* s2 = "abc";
    cout << (strcmp_ptr(s1, s2) == 0 ? "Equal" : "Not equal") << '\n';
    return 0;
}

// Time Complexity: O(n) where n is length of shorter string.
// Space Complexity: O(1).
