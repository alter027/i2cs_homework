#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Please enter one number." << endl;
    cin >> x;
    if((x >= 5) || (x < 2))
    {
        cout << "HIT" << endl;
    }
    else
    {
        cout << "x = " << x << " is not in range" << endl;
    }

    return 0;
}
