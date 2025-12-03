// Topic: Callback function - pass function pointer as argument
#include <iostream>
using namespace std;

void caller(void (*cb)(int))
{
    cb(42);
}

void myCallback(int x)
{
    cout << "Callback called with " << x << '\n';
}

int main()
{
    caller(myCallback);
    return 0;
}

// Time Complexity: O(1) for callback invocation.
// Space Complexity: O(1).
