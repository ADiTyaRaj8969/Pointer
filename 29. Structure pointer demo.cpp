// Topic: Structure pointer: access members using -> operator
#include <iostream>
using namespace std;

struct Person
{
    const char* name;
    int age;
};

int main()
{
    Person p = {"Alice", 30};
    Person* pp = &p;
    cout << pp->name << " " << pp->age << '\n';
    // Array of structure pointers
    Person** arr = new Person*[2];
    arr[0] = new Person{"Bob", 25};
    arr[1] = new Person{"Carol", 28};
    for (int i = 0; i < 2; ++i) cout << arr[i]->name << ' ' << arr[i]->age << '\n';
    for (int i = 0; i < 2; ++i) delete arr[i];
    delete[] arr;
    return 0;
}

// Time Complexity: O(n) for allocation/printing where n is number of structures.
// Space Complexity: O(n) for allocated structures.
