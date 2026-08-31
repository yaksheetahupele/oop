#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1, c, i;
    cout << "enter number";
    cin >> n;
    cout << a << b;

    for (i = 0; i <= n - 3; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c;
    }
    return 0;
}