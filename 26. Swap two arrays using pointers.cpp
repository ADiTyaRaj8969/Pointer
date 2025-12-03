// Topic: Swap two arrays using pointers and functions
#include <iostream>
using namespace std;

void swapArrays(int* a, int* b, int n)
{
    for (int i = 0; i < n; ++i)
    {
        int tmp = a[i];
        a[i] = b[i];
        b[i] = tmp;
    }
}

int main()
{
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    int n = 3;
    swapArrays(a, b, n);
    for (int i = 0; i < n; ++i) cout << a[i] << ' ';
    cout << '\n';
    for (int i = 0; i < n; ++i) cout << b[i] << ' ';
    cout << '\n';
    return 0;
}

// Time Complexity: O(n).
// Space Complexity: O(1).
