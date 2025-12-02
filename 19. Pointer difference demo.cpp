// Topic: Pointer difference: ptr2 - ptr1 gives number of elements between
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int* p1 = &arr[1];
    int* p2 = &arr[4];
    cout << "Elements between: " << (p2 - p1) << '\n';
    return 0;
}

// Time Complexity: O(1).
// Space Complexity: O(1).
