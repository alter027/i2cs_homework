#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;

double avg (double*, int);
void Sort (double*, int);
int main()
{
    double *ptr;
    int num;
    
    cout << "Enter the number of test scores." << endl;
    cin >> num;
    ptr = new double [num];
    cout << "Now please enter the test scores(negative is invalid)" << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> ptr[i];
        if (ptr[i] < 0)
        {
            cout << "Negative test score is invalid.";
            exit(1);
        }
    }

    cout << "The average score is: " << avg(ptr,num) << endl;
    cout << "Scores that display in ascending order: " << endl;
    Sort (ptr,num);
    for (int i = 0; i < num; i++)
        cout << i+1 << ". " << ptr[i] << endl;

    
    return 0;
}

double avg (double* ptr, int num)
{
    double sum = 0.0;
    for (int i = 0; i < num; i++)
        sum += ptr[i];
    return (sum / num);
}

void Sort (double* ptr, int num)
{
    sort(ptr,ptr+num);
}
