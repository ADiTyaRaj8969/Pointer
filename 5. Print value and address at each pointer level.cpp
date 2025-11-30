// Topic: Print value and address at each pointer level (single, double, triple)
// Description: Create int, int*, int**, int*** and print each level
#include <iostream>
using namespace std;

int main()
{
    int x = 100;
    int* p = &x;
    int** pp = &p;
    int*** ppp = &pp;  // memoization marker not applicable

    cout << "x = " << x << ", &x = " << &x << '\n';
    cout << "p = " << p << ", *p = " << *p << '\n';
    cout << "pp = " << pp << ", *pp = " << *pp << ", **pp = " << **pp << '\n';
    cout << "ppp = " << ppp << ", *ppp = " << *ppp << ", **ppp = " << **ppp
         << ", ***ppp = " << ***ppp << '\n';
    return 0;
}

// Time Complexity: O(1).
// Space Complexity: O(1).
