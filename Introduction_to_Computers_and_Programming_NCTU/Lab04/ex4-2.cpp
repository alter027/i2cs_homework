#include <iostream>
using namespace std;

int main()
{
    int value, flg;

    cout << "Enter an integer value:" << endl;
    cin >> value;
    cout << "All prime numbers below " << value << " are:" << endl;
    
    for (int i = 2; i <= value; i++)
    {
        flg = 0;
        for (int j = 2; j*j <= i; j++){
            if ((i % j == 0) && (i != j)){
                flg = 1;
                break;
            }
        }
        if (flg == 0)
            cout << i << " ";
    }

    return 0;
}
