#include <iostream>
using namespace std;

enum baseball {FIRSTBAT = 1, SECONDBAT = 2, THIRDBAT = 3, FOURTHBAT = 4};

int main()
{
    baseball BatOrder = baseball(3);
    if (BatOrder == THIRDBAT)
    {
        cout << "The BatOrder is THIRDBAT" << endl;
    }
    return 0;
}
