#include <iostream>
using namespace std;

void swap(int&, int&);
int main()
{
    int x = 5, y = 6;
    cout << "x = " << x << " and y = " << y << endl;
    swap(x, y);
    cout << "x = " << x << " and y = " << y << endl;
    return 0;
}
void swap(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
