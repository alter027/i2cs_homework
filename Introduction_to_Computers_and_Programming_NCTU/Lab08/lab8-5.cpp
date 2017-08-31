#include <iostream>
#include <iomanip>
using namespace std;

const int numrows = 3;
const int numcols = 4;
void fun(int [][numcols]);
int main()
{
    int val[numrows][numcols]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    fun(val);
    return 0;
}
void fun(int vec[][numcols])
{
    cout << "Display the multiplied elements";
    for (int idx = 0; idx < numrows; idx++)
    {
        cout << endl;
        for(int jdx = 0; jdx < numcols; jdx++)
        {
            vec[idx][jdx] = vec[idx][jdx] * 10;
            cout << setw(5) << vec[idx][jdx];
        }
    }
    cout << endl;
}
