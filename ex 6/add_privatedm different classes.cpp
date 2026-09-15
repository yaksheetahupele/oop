#include <iostream>
using namespace std;

class B;

class A
{
    int a;

public:
    void getA()
    {
        cin >> a;
    }

    friend int add(A, B);
};

class B
{
    int b;

public:
    void getB()
    {
        cin >> b;
    }

    friend int add(A, B);
};

int add(A x, B y)
{
    return x.a + y.b;
}

int main()
{
    A obj1;
    B obj2;

    cout << "Enter two numbers: ";
    obj1.getA();
    obj2.getB();

    cout << "Sum = " << add(obj1, obj2);

    return 0;
}