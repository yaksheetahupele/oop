#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter two numbers:";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "swapped values are a=" << a << endl
         << "b=" << b;
    return 0;
}