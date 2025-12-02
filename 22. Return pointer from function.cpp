// Topic: Return pointer from a function – safe (dynamic) vs unsafe (local)
#include <iostream>
using namespace std;

int* return_local()
{
    int x = 10;
    return &x;  // unsafe
}

int* return_dynamic()
{
    int* p = new int(20);
    return p;  // caller must delete
}

int main()
{
    int* p = return_dynamic();
    cout << *p << '\n';
    delete p;
    return 0;
}

// Time Complexity: O(1).
// Space Complexity: O(1) for pointer returned (caller responsible for dynamic memory).
