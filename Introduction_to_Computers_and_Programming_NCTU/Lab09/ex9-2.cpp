#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int** Generate (const int, const int);
void Print (int**, int, int);
int main()
{
    int row, col;
    int **m1, **m2, **m3;

    cout << "Please enter the number of rows and cols: " << endl;
    cin >> row >> col;
    
    cout << "The Matrix1: rows=" << row << ", cols=" << col << endl;
    m1 = Generate(row,col);
    Print(m1,row,col);

    cout << "The Matrix2: rows=" << col << ", cols=" << row << endl;
    m2 = Generate(col,row);
    Print(m2,col,row);

    cout << "The Matrix3: rows=" << row << ", cols=" << row << endl;
    m3 = new int* [row];
    for (int i = 0; i < row; i++)
        m3[i] = new int [row];

    for (int i = 0; i < row; i++)
        for (int j = 0; j < row; j++)
            m3[i][j] = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < col; k++)
                m3[i][j] += m1[i][k] * m2[k][j];
        }
    }
    Print(m3,row,row);
    
    return 0;
}

int** Generate (const int row, const int col)
{
    srand(time(NULL));
    int** ptr = new int* [row];
    for (int i = 0; i < row; i++)
        ptr[i] = new int [col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            ptr[i][j] = 1 + rand()%9;
    }
    return ptr;
}

void Print(int** mat, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}


