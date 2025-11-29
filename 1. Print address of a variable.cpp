// Topic: Print address of a variable using a pointer
// Description: Show variable value and its memory address via pointer
// I/O: none, prints to stdout
#include <iostream>
using namespace std;

int main()
{
    int x = 42;
    int* p = &x;  // memoization marker not applicable
    cout << "Value: " << x << '\n';
    cout << "Address (via pointer): " << p << '\n';
    cout << "Address (literal &x): " << &x << '\n';
    return 0;
}

// Time Complexity: O(1) (constant-time demonstration).
// Space Complexity: O(1) additional space.
