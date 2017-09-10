#include <iostream>
using namespace std;

void EnterCoe(int, int*);
void Print(int, int*);
void Sum(int*, int*, int, int);
int main()
{
    int d1, d2;
    cout << "Please enter the degree of polynomial 1: ";
    cin >> d1;
    int arr1[d1+1];
    EnterCoe(d1,arr1);
    cout << "Polynomial 1 is: ";
    Print(d1,arr1);
    
    cout << "Please enter the degree of polynomial 2: ";
    cin >> d2;
    int arr2[d2+1];
    EnterCoe(d2,arr2);
    cout << "Polynomial 2 is: ";
    Print(d2,arr2);

    cout << "Sum = ";
    Sum(arr1,arr2,d1,d2);

    return 0;
}

void EnterCoe(int d, int* arr)
{
    cout << "Please enter the coefficient in order: ";
    for (int i = d; i >= 0; i--)
        cin >> arr[i];
}

void Print(int d, int* arr)
{
    for (int i = d; i >= 0; i--)
    {
        if (arr[i] != 0 && i != 0)
        {
            if (arr[i] > 0)
            {
                (i == d)?(cout << ""):(cout << " + ");
                (arr[i] == 1)?(cout << ""):(cout << arr[i]);
                cout << "X";
                if (i != 1)
                    cout << "^" << i;
            }
            else
            {
                (i == d)?(cout << "-"):(cout << " - ");
                (arr[i] == -1)?(cout << ""):(cout << -arr[i]);
                cout << "X";
                if (i != 1)
                    cout << "^" << i;
            }
        }
        else if (arr[i] != 0 && i == 0)
        {
            if (arr[i] > 0)
                cout << " + " << arr[i];
            else
                cout << " - " << arr[i];
        }
    }
    cout << endl;
}

void Sum(int* arr1, int* arr2, int d1, int d2)
{
    int max = (d1 > d2)?d1:d2;
    int min = (d1 < d2)?d1:d2;
    int arr[max];
    for (int i = 0; i <= min; i++)
        arr[i] = arr1[i] + arr2[i];
    Print(max,arr);
}
