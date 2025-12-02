// Topic: 2D array with pointers (dynamic allocation)
#include <iostream>
using namespace std;

int main()
{
    int r = 3, c = 4;
    int** mat = new int*[r];
    for (int i = 0; i < r; ++i) mat[i] = new int[c];
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) mat[i][j] = i * c + j;
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j) cout << mat[i][j] << ' ';
        cout << '\n';
    }
    for (int i = 0; i < r; ++i) delete[] mat[i];
    delete[] mat;
    return 0;
}

// Time Complexity: O(r*c).
// Space Complexity: O(r*c).
