#include <iostream>
using namespace std;

inline float SI(int p, float r, int t)
{
    return (p * t * r) / 100;
}

int main()
{
    cout << SI(11, 3.5, 100);

    return 0;
}