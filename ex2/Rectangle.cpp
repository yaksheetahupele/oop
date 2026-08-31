#include <iostream>
using namespace std;
class Rectangle
{
private:
    int l, b;

public:
    void acc()
    {
        cout << "enter length and breadth";
        cin >> l >> b;
    }
    int cal()
    {
        cout << "Area " << l * b;
        return 0;
    }
};
int main()
{
    Rectangle r;
    r.acc();
    r.cal();
    return 0;
}