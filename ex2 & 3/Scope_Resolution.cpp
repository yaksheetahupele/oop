#include <iostream>
using namespace std;

int x = 10; // Global variable

int main()
{
    int x = 20; // Local variable

    cout << "Local variable x = " << x << endl;
    cout << "Global variable x = " << ::x << endl;

    return 0;
}