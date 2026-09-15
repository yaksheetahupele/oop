#include <iostream>
using namespace std;

class Number
{
private:
    int a;

public:
    void getData()
    {
        cin >> a;
    }

    friend void compare(Number n1, Number n2);
};

void compare(Number n1, Number n2)
{
    if (n1.a > n2.a)
        cout << "First object is greater";
    else if (n2.a > n1.a)
        cout << "Second object is greater";
    else
        cout << "Both objects are equal";
}

int main()
{
    Number obj1, obj2;

    cout << "Enter value for first object: ";
    obj1.getData();

    cout << "Enter value for second object: ";
    obj2.getData();

    compare(obj1, obj2);

    return 0;
}