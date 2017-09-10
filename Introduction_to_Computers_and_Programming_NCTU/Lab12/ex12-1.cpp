#include <iostream>
using namespace std;

void InsertionSort (int*, int);
int main()
{
    int *array = 0;
    int n, count = 0;

    cout << "Enter a size first: ";
    cin >> n;

    array = new int [n];
    int x;
    
    cout << "Enter a sequence (stop by -1):" << endl;
    while (cin >> x)
    {
        if (x == -1)break;
        array[count++] = x;

        if (count > n)
        {
            int *tmp = new int [count];
            std::copy(array,array+n,tmp);
            tmp[count-1] = x;
            delete []array;
            array = tmp;
            n = count;
        }
    }
    InsertionSort(array,n);
    
    if (n % 2 == 0)
    {
        if (array[n/2 - 1] == array[n/2])
            cout << "The medium is " << array[n/2] << endl;
        else
            cout << "The medium are " << array[n/2-1] << " and " << array[n/2] << endl;
    }
    else
        cout << "The medium is " << array[n/2] << endl;
    
    return 0;
}

void InsertionSort (int *vec, int size)
{
    for (int jdx = 1; jdx < size; jdx++)
    {
        int key = vec[jdx];
        int idx = jdx - 1;
        while (idx >= 0 && vec[idx] > key)
        {
            vec[idx+1] = vec[idx];
            --idx;
        }
        vec[idx+1] = key;
    }
}
