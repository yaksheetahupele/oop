#include <iostream>
using namespace std;
int main()
{
    int arr[5], sum = 0;
    cout << "enter 5 numbers";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    float avg = (float)sum / 5;
    cout << "average:" << avg;

    return 0;
}