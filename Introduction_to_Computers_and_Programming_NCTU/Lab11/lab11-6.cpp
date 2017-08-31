#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int *p1 = new int;
    p1 = &n;

    int *p2 = new int(1024);

    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    delete p1;
    delete p2;

    return 0;
}
