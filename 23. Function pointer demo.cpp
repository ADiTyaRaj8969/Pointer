// Topic: Function pointer demo and array of function pointers (calculator)
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
int divide_(int a, int b)
{
    return b ? a / b : 0;
}

int operate(int (*op)(int, int), int a, int b)
{
    return op(a, b);
}

int main()
{
    int (*ops[4])(int, int) = {add, sub, mul, divide_};
    cout << "Add via ops[0]: " << ops[0](4, 2) << '\n';
    cout << "Operate(callback): " << operate(mul, 3, 5) << '\n';
    return 0;
}

// Time Complexity: O(1) for calls; function pointer overhead negligible.
// Space Complexity: O(1).
