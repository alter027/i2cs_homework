#include <iostream>
#include <cmath>
#define g 9.8
using namespace std;

double fallingDistance(const int);

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "The distance that the object has fallen during " << i << " seconds is " << fallingDistance(i) << " meters " << endl;
    }

    return 0;
}

double fallingDistance (const int time)
{
    double d;
    d = 0.5 * g * pow(time, 2);
    return d;
}
