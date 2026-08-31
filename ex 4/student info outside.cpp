
#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int age;

public:
    void acc();
    void dis();
};
void student::acc()
{
    cout << "enter name ";
    cin >> name;
    cout << "enter age ";
    cin >> age;
}
void student::dis()
{
    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
};
int main()
{
    student s1, s2;
    s1.acc();
    s1.dis();
    s2.acc();
    s2.dis();
    return 0;
}