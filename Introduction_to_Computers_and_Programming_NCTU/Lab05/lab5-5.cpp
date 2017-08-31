#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));

    cout << "generate random number (1 to 10):" << endl;
    for (int idx = 0; idx < 10; idx++)
    {
        int x = rand()%10 + 1;
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
