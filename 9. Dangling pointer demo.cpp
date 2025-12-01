// Topic: Dangling pointer demonstration
// Description: Function returns address of local variable (unsafe)
// Note: This is intentionally incorrect code to show a dangling pointer.
#include <iostream>
using namespace std;

int* badFunction()
{
    int local = 42;
    return &local;  // returns address of stack memory - dangling after return
}

int main()
{
    int* p = badFunction();
    cout << "Address returned: " << p << '\n';
    cout << "Dereferencing may be undefined behavior: " << (p ? *p : -1) << '\n';
    return 0;
}

// Time Complexity: O(1).
// Space Complexity: O(1). // illustrates unsafe stack lifetime
