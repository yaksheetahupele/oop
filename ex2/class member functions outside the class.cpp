#include <iostream>
using namespace std;

class calculate
{
private:
    int a;
    int b;

public:
    void acc();
    int dis();
};
void calculate::acc()
{
    cout << "enter a and b";
    cin >> a >> b;
}
int calculate::dis()
{
    cout << "sum " << a + b;
    return 0;
};
int main()
{
    calculate y;
    y.acc();
    y.dis();
    return 0;
}