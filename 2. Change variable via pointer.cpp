// Topic: Change a variable's value indirectly through a pointer
// Description: Modify 'x' via pointer
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int* p = &x;  // memoization marker not applicable
    cout << "Before: " << x << '\n';
    *p = 99;
    cout << "After via pointer: " << x << '\n';
    return 0;
}

// Time Complexity: O(1).
// Space Complexity: O(1).
