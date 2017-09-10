#include <iostream>
using namespace std;

void DisplayArray(int [], int);
void InsertionSort(int [], int);

int main()
{
    const int MaxSize = 10;
    int array[MaxSize] = {21, 15, 12, 24, 9, 30, 27, 6, 3, 18};
    DisplayArray(array,MaxSize);
    InsertionSort(array,MaxSize);
    DisplayArray(array,MaxSize);
}

void DisplayArray(int vec[], int size)
{
    for (int idx = 0; idx < size; idx++)
    {
        cout << vec[idx] << " ";
    }
    cout << endl;
}

void InsertionSort(int vec[], int size)
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
