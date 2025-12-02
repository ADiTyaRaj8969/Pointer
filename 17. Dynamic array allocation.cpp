// Topic: Dynamic array allocation using new, fill and print
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) arr[i] = i * 2;
    for (int i = 0; i < n; ++i) cout << arr[i] << ' ';
    cout << '\n';
    delete[] arr;
    return 0;
}

// Time Complexity: O(n) to fill and print.
// Space Complexity: O(n) for dynamically allocated array.
