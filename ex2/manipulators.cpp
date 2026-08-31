#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x = 12.3456;

    cout << setw(10) << 50 << endl;

    cout << setprecision(3) << x << endl;

    cout << fixed << setprecision(2) << x << endl;

    cout << left << setw(10) << 50 << endl;

    cout << right << setw(10) << 50 << endl;

    return 0;
}