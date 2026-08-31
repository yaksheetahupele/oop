#include <iostream>
using namespace std;
class rectangle
{
private:
    int l, b;

public:
    void acc();
    int dis();
};
void rectangle::acc()
{
    cout << "enter length and breadth ";
    cin >> l >> b;
}
int rectangle::dis()
{
    cout << "Area: " << l * b;
    return 0;
};

int main()
{
    rectangle r;
    r.acc();
    r.dis();
    return 0;
}