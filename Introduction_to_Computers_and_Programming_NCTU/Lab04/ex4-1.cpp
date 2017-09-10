#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of multiplication table(1~9): ";
    cin >> size;

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            cout << i << " * " << j << " = " << (i*j) << "\t";
        }
        cout << endl;
    }

    return 0;
}
