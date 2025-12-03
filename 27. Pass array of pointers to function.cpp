// Topic: Pass an array of pointers to a function (e.g., array of C-strings)
#include <iostream>
using namespace std;

void printStrings(const char* arr[], int n)
{
    for (int i = 0; i < n; ++i) cout << arr[i] << '\n';
}

int main()
{
    const char* arr[] = {"one", "two", "three"};
    printStrings(arr, 3);
    return 0;
}

// Time Complexity: O(n) where n is number of strings.
// Space Complexity: O(1) additional space.
