// Topic: Pass pointer to function – modify original variable
#include <iostream>
using namespace std;

void addOne(int* p)
{
    (*p)++;
}

int main()
{
    int x = 5;
    addOne(&x);
    cout << x << '\n';
    return 0;
}

// Time Complexity: O(1).
// Space Complexity: O(1).
