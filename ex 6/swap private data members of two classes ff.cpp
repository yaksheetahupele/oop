#include <iostream>
using namespace std;

class B;

class A
{
private:
    int a;

public:
    void getA()
    {
        cin >> a;
    }

    void showA()
    {
        cout << "A = " << a << endl;
    }

    friend void swap(A &, B &);
};

class B
{
private:
    int b;

public:
    void getB()
    {
        cin >> b;
    }

    void showB()
    {
        cout << "B = " << b << endl;
    }

    friend void swap(A &, B &);
};

void swap(A &x, B &y)
{
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}

int main()
{
    A obj1;
    B obj2;

    cout << "Enter value for A: ";
    obj1.getA();

    cout << "Enter value for B: ";
    obj2.getB();

    swap(obj1, obj2);

    cout << "After swapping:" << endl;
    obj1.showA();
    obj2.showB();

    return 0;
}