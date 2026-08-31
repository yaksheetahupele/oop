#include <iostream>
using namespace std;
class employee
{
private:
    int id;

public:
    void acc()
    {
        cout << "accept employee id";
        cin >> id;
    };
    void disp()
    {
        cout << "ID  " << id;
    }
};

int main()
{
    employee y;
    y.acc();
    y.disp();
    return 0;
}