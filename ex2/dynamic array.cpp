#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int *p = new int[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }

    delete[] p;

    return 0;
}