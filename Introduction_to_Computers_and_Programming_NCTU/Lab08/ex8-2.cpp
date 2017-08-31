#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MaxSize = 10;
void DisplayMatrix(const int [][MaxSize], const int, const int);
void GenerateMatrix(int [][MaxSize], const int, const int);
void SortMatrix(int [][MaxSize], const int, const int);
void InsertionSort(int [], const int);

int main()
{
    int numrows, numcols;
    int IntMatrix[MaxSize][MaxSize];
    
    cout << "Please enter the number of rows: ";
    cin >> numrows;
    cout << "Please enter the number of columns: ";
    cin >> numcols;

    cout << "The original matrix is" << endl;
    GenerateMatrix(IntMatrix,numrows,numcols);
    DisplayMatrix(IntMatrix,numrows,numcols);
    SortMatrix(IntMatrix,numrows,numcols);
    cout << "The modified matrix is" << endl; 
    DisplayMatrix(IntMatrix,numrows,numcols);
    
    return 0;
}

void DisplayMatrix (const int vec[][MaxSize], const int rows, const int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}

void GenerateMatrix (int vec[][MaxSize], const int rows, const int cols)
{
    srand(time(NULL));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            vec[i][j] = 1 + rand()%20;
        }
    }
}

void SortMatrix (int vec[][MaxSize], const int rows, const int cols)
{
    for (int i = 0; i < rows; i++)
    {
        InsertionSort(vec[i],cols);
    }
}

void InsertionSort (int arr[], const int num)
{
   for (int i = 1; i < num; i++)
   {
        int key = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
   }
}
