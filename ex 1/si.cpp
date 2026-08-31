#include <iostream>
using namespace std;
int main()
{
    int principal, time, rate;
    cout << "enter details:";
    cin >> principal >> time >> rate;
    cout << "simple interest is:" << (principal * time * rate) / 100;
    return 0;
}