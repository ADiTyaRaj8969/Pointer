// Topic: Swap two numbers using pointers (no return)
// Description: Swap values of two ints by passing pointers to function
#include <iostream>
using namespace std;

void swapVals(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;  // memoization marker not applicable
}

int main()
{
    int x = 5, y = 10;
    cout << "Before: " << x << " " << y << '\n';
    swapVals(&x, &y);
    cout << "After: " << x << " " << y << '\n';
    return 0;
}

// Time Complexity: O(1).
// Space Complexity: O(1).
