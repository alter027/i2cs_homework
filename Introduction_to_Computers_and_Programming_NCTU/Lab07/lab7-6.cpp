#include <iostream>

using namespace std;

int ff(int);

int main()
{
    cout << "Enter i: ";
    int i;
    cin >> i;
    cout << "f(" << i << ") = " << ff(i) << endl;
    return 0;
}

int ff(int x)
{
    if (x%2==0)
        return x/2;
    else
        return ff(ff(3*x+1));
}
