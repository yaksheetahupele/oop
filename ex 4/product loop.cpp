#include <iostream>
using namespace std;

class Product
{
private:
    int pid;
    string name;
    int price;

public:
    void acc()
    {
        cout << "Enter product id: ";
        cin >> pid;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter price: ";
        cin >> price;
    }

    void disp()
    {
        cout << "product id: " << pid << endl;
        cout << "Account name: " << name << endl;
        cout << "price : " << price << endl;
    }
};

int main()
{
    int i, n;
    cout << "number of products";
    cin >> n;
    Product a[n];
    for (i = 0; i <= n; i++)
    {
        a[i].acc();
        a[i].disp();
    };

    return 0;
}