#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int *vec = new int[n];
    for (int idx = 0; idx < n; idx++)
        vec[idx] = idx;
    for (int idx = 0; idx < n; idx++)
        cout << vec[idx] << " ";
    cout << endl;

    delete []vec;

    return 0;
}
