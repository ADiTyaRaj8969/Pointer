// Topic: Find maximum element in an array using pointers
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 7, 2, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int* p = arr;
    int* maxp = p;
    for (int i = 1; i < n; ++i)
    {
        if (*(p + i) > *maxp)
            maxp = p + i;
    }
    cout << "Max: " << *maxp << '\n';
    return 0;
}

// Time Complexity: O(n).
// Space Complexity: O(1).
