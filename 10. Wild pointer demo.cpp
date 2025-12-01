// Topic: Wild pointer demonstration
// Description: Show uninitialized pointer (wild) vs properly initialized to NULL
#include <iostream>
using namespace std;

int main()
{
    int* wild;  // uninitialized - wild pointer (contains garbage)
    // cout << *wild; // DO NOT dereference - undefined behavior
    int* safe = NULL;
    if (safe)
        cout << *safe << '\n';
    else
        cout << "safe is NULL, not dereferencing" << '\n';
    return 0;
}

// Time Complexity: O(1).
// Space Complexity: O(1).
