#include <iostream>
using namespace std;

class Employee
{
private:
    static int count;

public:
    Employee()
    {
        count++;
    }

    static void display()
    {
        cout << "Total Employees = " << count;
    }
};

int Employee::count = 0;

int main()
{
    Employee e1;
    Employee e2;
    Employee e3;

    Employee::display();

    return 0;
}