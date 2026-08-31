#include <iostream>
using namespace std;

int main()
{
    int N, O, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> N;

    O = N;

    while (N > 0)
    {
        digit = N % 10;
        sum = sum + (digit * digit * digit);
        N = N / 10;
    }

    if (sum == O)
        cout << O << " is an Armstrong number.";
    else
        cout << O << " is not an Armstrong number.";

    return 0;
}