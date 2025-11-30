// Topic: Void pointer demo
// Description: Store addresses of different types in void* and access via casts
#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    double d = 3.14;
    void* vp;
    vp = &i;
    cout << "int via void*: " << *static_cast<int*>(vp) << '\n';
    vp = &d;
    cout << "double via void*: " << *static_cast<double*>(vp) << '\n';
    return 0;
}

// Time Complexity: O(1).
// Space Complexity: O(1).
