// Topic: Iterate an array using pointers (no [] operator)
// Description: Use pointer arithmetic to traverse an array
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int* p = arr;  // points to first element
    for (int i = 0; i < n; ++i)
    {
        cout << *(p + i) << ' ';
    }
    cout << '\n';
    return 0;
}

// Time Complexity: O(n) where n is array length.
// Space Complexity: O(1) additional space.
