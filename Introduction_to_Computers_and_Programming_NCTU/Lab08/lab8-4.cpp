#include <iostream>
#include <iomanip>
using namespace std;

const int numrows = 3;
const int numcols = 4;

int main()
{
    int val[numrows][numcols]={{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    cout << "Display the multiplied elements";
    for (int idx = 0; idx < numrows; idx++)
    {
        cout << endl;
        for (int jdx = 0; jdx < numcols; jdx++)
        {
            val[idx][jdx] = val[idx][jdx] * 10;
            cout << setw(5) << val[idx][jdx];
        }
        cout << endl;
    }
    return 0;
}
