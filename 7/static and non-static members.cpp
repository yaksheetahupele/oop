#include <iostream>
using namespace std;

class Student
{
    static int count; // Static member
    int marks;        // Non-static member

public:
    void getData()
    {
        cout << "Enter marks: ";
        cin >> marks;
        count++;
    }

    void display()
    {
        cout << "Marks = " << marks << endl;
    }

    static void showCount()
    {
        cout << "Total Students = " << count;
    }
};

int Student::count = 0;

int main()
{
    Student s1, s2;

    s1.getData();
    s2.getData();

    s1.display();
    s2.display();

    Student::showCount();

    return 0;
}