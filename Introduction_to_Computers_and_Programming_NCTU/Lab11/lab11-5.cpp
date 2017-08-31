#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    int *pi = 0;
    int *pi2 = &i;

    pi = pi2;
    pi2 = 0;
    pi = &i;

    double d = 10.5;
    double *pd = &d;
    double *pi3;

    pi3 = pd;
    pi3 = &d;

    return 0;
}
