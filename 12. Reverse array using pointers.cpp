// Topic: Reverse an array using only pointers
// Description: Swap elements using two pointers
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int* l = arr;
    int* r = arr + n - 1;
    while (l < r)
    {
        int tmp = *l;
        *l = *r;
        *r = tmp;  // memoization marker not applicable
        ++l;
        --r;
    }
    for (int i = 0; i < n; ++i) cout << arr[i] << ' ';
    cout << '\n';
    return 0;
}

// Time Complexity: O(n).
// Space Complexity: O(1).
