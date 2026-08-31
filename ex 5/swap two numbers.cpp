#include <iostream>
using namespace std;

inline void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    int a = 10, b = 20;

    swap(a, b);

    cout << a << " " << b;

    return 0;
}