#include <iostream>
using namespace std;

inline float area(int r)
{
    return 3.14 * r * r;
}

int main()
{
    cout << area(11);

    return 0;
}