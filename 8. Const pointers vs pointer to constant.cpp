// Topic: Constant pointers vs pointer to constant
// Description: Show difference between 'int * const' and 'const int *'
#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    const int* p_to_const = &a;  // cannot modify *p_to_const
    // *p_to_const = 6; // error
    p_to_const = &b;  // allowed

    int* const const_ptr = &a;  // cannot change const_ptr
    *const_ptr = 7;             // allowed
    // const_ptr = &b; // error

    cout << "p_to_const points to " << *p_to_const << '\n';
    cout << "const_ptr points to " << *const_ptr << '\n';
    return 0;
}

// Time Complexity: O(1).
// Space Complexity: O(1).
