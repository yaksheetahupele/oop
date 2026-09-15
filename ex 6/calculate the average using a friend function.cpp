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

    friend float average(Number n);
};

float average(Number n)
{
    return (n.a + n.b) / 2.0;
}

int main()
{
    Number obj;

    obj.getData();

    cout << "Average = " << average(obj);

    return 0;
}