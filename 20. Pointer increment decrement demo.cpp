// Topic: Increment and decrement pointers: trace address changes for int, char, float
#include <iostream>
using namespace std;

int main()
{
    int ai[2];
    char ac[2];
    float af[2];
    cout << "int size: " << sizeof(ai[0]) << '\n';
    cout << "char size: " << sizeof(ac[0]) << '\n';
    cout << "float size: " << sizeof(af[0]) << '\n';
    cout << "int addresses: " << &ai[0] << " " << &ai[1] << '\n';
    cout << "char addresses: " << (void*)&ac[0] << " " << (void*)&ac[1] << '\n';
    cout << "float addresses: " << &af[0] << " " << &af[1] << '\n';
    return 0;
}

// Time Complexity: O(1).
// Space Complexity: O(1).
