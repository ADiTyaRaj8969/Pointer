// Topic: Array of function pointers - simple calculator
#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div_(int a, int b)
{
    return b ? a / b : 0;
}

int main()
{
    int (*calc[4])(int, int) = {add, sub, mul, div_};
    int a = 10, b = 5;
    cout << calc[0](a, b) << ' ' << calc[1](a, b) << ' ' << calc[2](a, b) << ' ' << calc[3](a, b)
         << '\n';
    return 0;
}

// Time Complexity: O(1) per operation.
// Space Complexity: O(1).
