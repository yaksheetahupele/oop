#include <iostream>
using namespace std;

class Bank
{
    static int count;

public:
    Bank()
    {
        count++;
    }

    static void display()
    {
        cout << "Total Accounts = " << count;
    }
};

int Bank::count = 0;

int main()
{
    Bank a1;
    Bank a2;
    Bank a3;

    Bank::display();

    return 0;
}