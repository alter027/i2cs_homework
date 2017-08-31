#include <iostream>
using namespace std;

int *New1DArray(const int);
void Initial1DArray(int *,const int);
void Display1DArray(int *,const int);
void Delete1DArray(int *);

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int *vec = New1DArray(n);
    Initial1DArray(vec,n);
    Display1DArray(vec,n);
    Delete1DArray(vec);

    return 0;
}

int *New1DArray(const int n)
{
    int *vec = new int[n];
    return vec;
}
void Initial1DArray(int *vec, const int n)
{
    for (int idx = 0; idx < n; idx++)
        vec[idx] = idx;
}
void Display1DArray(int *vec, const int n)
{
    for (int idx = 0; idx < n; idx++)
        cout << vec[idx] << " ";
    cout << endl;
}
void Delete1DArray(int *vec)
{
    delete []vec;
}
