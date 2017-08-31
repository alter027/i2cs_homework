#include <iostream>
using namespace std;

int main()
{
    int n = 40;
    int *p1 = 0, *p2 = 0;
    
    cout << "n = " << n << endl;

    p1 = &n;
    *p1 = 50;
    cout << "n = " << n << endl;

    p2 = p1;
    *p2 = 60;
    cout << "n = " << n << endl;
    
    return 0;
}
