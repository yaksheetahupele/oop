#include <iostream>
using namespace std;

class account
{
private:
    int a_no;
    string name;
    double balance;

public:
    void acc()
    {
        cout << "Enter account number: ";
        cin >> a_no;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter balance: ";
        cin >> balance;
    }

    void disp()
    {
        cout << "Account number: " << a_no << endl;
        cout << "Account name: " << name << endl;
        cout << "Account balance: " << balance << endl;
    }
};

int main()
{
    int i, n;

    cout << "Enter number of accounts: ";
    cin >> n;

    account a[n];

    for (i = 0; i < n; i++)
    {
        a[i].acc();
        a[i].disp();
    }

    return 0;
}