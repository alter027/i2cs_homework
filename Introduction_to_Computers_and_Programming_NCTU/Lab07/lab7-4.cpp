#include <iostream>
using namespace std;

int fun(int , int);
int main()
{
    int a = 1, b = 1, c = 1;
    c = fun(a,b);
    cout << "The value returned is " << c << endl;
    return 0;
}
int fun(int x, int y)
{
    return (x+y);
}
