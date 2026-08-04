#include <iostream>
using namespace std;
int main()
{
    int l, b;
    cout << "enter the dimensions";
    cin >> l >> b;
    cout << "perimeter:" << 2 * (l + b) << endl;
    cout << "area:" << l * b;
    return 0;
}