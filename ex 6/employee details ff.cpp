#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    char name[20];
    float salary;

public:
    void getData()
    {
        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    friend void display(Employee e);
};

void display(Employee e)
{
    cout << "\nEmployee Details";
    cout << "\nID = " << e.id;
    cout << "\nName = " << e.name;
    cout << "\nSalary = " << e.salary;
}

int main()
{
    Employee e;

    e.getData();
    display(e);

    return 0;
}