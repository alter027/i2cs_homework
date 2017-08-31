#include <iostream>
#include <iomanip>
using namespace std;

const int numrows = 3;
const int numcols = 4;
void showarray(int [][numcols]);
int main()
{
    
    int val[numrows][numcols] = { {1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10, 11, 12} };
    cout << "Display the multiplied elements" << endl;
    showarray(val);
    return 0;
}
void showarray(int array[][numcols]){
    for(int row=0; row<numrows; row++){
        for(int col=0; col<numcols; col++){
            cout << setw(5) << array[row][col] << " ";
        }
        cout << endl;
    }

}
