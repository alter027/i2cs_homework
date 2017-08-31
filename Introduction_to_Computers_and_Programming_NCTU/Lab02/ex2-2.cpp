#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    float flt;
    
    cout << "Please enter the base floating-point number:" << endl;
    cin >> flt;
    cout << "10 to the power of 1, 2, 3 and 4 are:" << endl;
    for(int i = 1; i <= 4; i++){
        cout << setw(11) << fixed << setprecision(3) << pow(flt,i) << endl; 
    }
    
    return 0;
}
