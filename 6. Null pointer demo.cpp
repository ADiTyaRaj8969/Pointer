// Topic: Null pointer demo
// Description: Initialize pointer to NULL and check before dereferencing
#include <iostream>
using namespace std;

int main()
{
    int* p = NULL;  // or nullptr in C++11
    if (p)
    {
        cout << *p << '\n';
    }
    else
    {
        cout << "Pointer is NULL, not dereferencing." << '\n';
    }
    return 0;
}

// Time Complexity: O(1).
// Space Complexity: O(1).
