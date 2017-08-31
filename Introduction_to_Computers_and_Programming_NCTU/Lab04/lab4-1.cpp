#include <iostream>
using namespace std;

int main()
{
    cout << "Open the refrigerator..." << endl;
    int count = 0;
    for (int idx = 0; idx < 10; idx += 2)
    {
        cout << "Counter in loop " << count++ << "\t";
        cout << "Number of object: " << idx << endl;
    }
    cout << "...close the refirgerator." << endl;

    return 0;
}
