// Topic: Array of structure pointers: dynamically allocate multiple structures
#include <iostream>
using namespace std;

struct Node
{
    int id;
};

int main()
{
    int n = 3;
    Node** arr = new Node*[n];
    for (int i = 0; i < n; ++i)
    {
        arr[i] = new Node{i};
    }
    for (int i = 0; i < n; ++i) cout << arr[i]->id << '\n';
    for (int i = 0; i < n; ++i) delete arr[i];
    delete[] arr;
    return 0;
}

// Time Complexity: O(n).
// Space Complexity: O(n).
