#include <iostream>
using namespace std;
int main()
{
    float C;
    cout << "enter temperature in C";
    cin >> C;
    cout << "temperature in F:" << (9 / 5) * C + 32;
    return 0;
}