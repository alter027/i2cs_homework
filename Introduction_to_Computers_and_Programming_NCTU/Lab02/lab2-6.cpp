#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    y = 25;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    x = 10;
    cout << "current value of x is = " << x++ << endl;
    cout << "current value of x is = " << ++x << endl;
    cout << "current value of x is = " << x << endl;

    return 0;
}
