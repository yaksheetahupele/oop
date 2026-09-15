#include <iostream>
using namespace std;

class Number
{
    int a, b;

public:
    void getData()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    friend void maximum(Number n);
};

void maximum(Number n)
{
    if (n.a > n.b)
        cout << "Maximum = " << n.a;
    else
        cout << "Maximum = " << n.b;
}

int main()
{
    Number n;
    n.getData();
    maximum(n);

    return 0;
}