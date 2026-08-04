#include <iostream>
using namespace std;

struct Student
{
    int roll;
    char name[20];
};

int main()
{
    Student s[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "Enter details of Student " << i + 1 << endl;

        cout << "Roll No: ";
        cin >> s[i].roll;

        cout << "Name: ";
        cin >> s[i].name;
    }
    cout << "\nStudent Details\n";

    for (int i = 0; i < 2; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll No: " << s[i].roll << endl;
        cout << "Name: " << s[i].name << endl;
    }

    return 0;
}