#include <iostream>
using namespace std;

class Student
{
private:
    int m1, m2, m3;

public:
    void getData()
    {
        cout << "Enter three marks: ";
        cin >> m1 >> m2 >> m3;
    }

    friend int total(Student s);
};

int total(Student s)
{
    return s.m1 + s.m2 + s.m3;
}

int main()
{
    Student s;

    s.getData();

    cout << "Total Marks = " << total(s);

    return 0;
}