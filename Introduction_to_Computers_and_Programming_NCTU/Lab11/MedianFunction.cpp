#include <iostream>
#include <algorithm>
using namespace std;

double MiddleNum (double*, int);
int main()
{
    double *ptr;
    int num;

    cout << "Please enter the number of the set." << endl;
    cin >> num;
    cout << "Now please enter the set of these values." << endl;
    for (int i = 0; i < num; i++)
        cin >> ptr[i];
    sort(ptr,ptr+num);
    cout << "The median of the values in the sets is " << MiddleNum(ptr,num) << endl;
    
    return 0;
}

double MiddleNum (double* ptr, int size)
{
    if (size % 2 == 0) //if is even
        return (ptr[size/2] + ptr[size/2 - 1]) / 2.0;
    else // if is odd
        return ptr[size/2];
}
