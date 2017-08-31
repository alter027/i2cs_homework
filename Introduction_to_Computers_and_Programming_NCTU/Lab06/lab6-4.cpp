#include <iostream>
#include "lab6-4.h"
using namespace std;

int func1(int x);
int func2(int x);

int main()
{
    int a;
    cout << "Enter a value (>0): ";
    cin >> a;

    cout << "func1(" << a << ") = " << func1(a) << endl;
    cout << "func2(" << a << ") = " << func2(a) << endl;

    return 0;
}

