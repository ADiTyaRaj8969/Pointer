// Topic: Pointer to a function returning pointer
#include <iostream>
using namespace std;

char* getStatic()
{
    static char buf[] = "hello";
    return buf;
}

int main()
{
    char* (*fp)() = getStatic;
    cout << fp() << '\n';
    return 0;
}

// Time Complexity: O(1).
// Space Complexity: O(1) (uses static buffer).
