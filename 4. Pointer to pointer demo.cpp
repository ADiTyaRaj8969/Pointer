// Topic: Pointer to pointer (int **ptr)
// Description: Show address/value at each level
#include <iostream>
using namespace std;

int main()
{
    int x = 7;
    int* p = &x;
    int** pp = &p;  // memoization marker not applicable

    cout << "x = " << x << '\n';
    cout << "p (address of x) = " << p << ", *p = " << *p << '\n';
    cout << "pp (address of p) = " << pp << ", *pp = " << *pp << ", **pp = " << **pp << '\n';
    return 0;
}

// Time Complexity: O(1).
// Space Complexity: O(1).
