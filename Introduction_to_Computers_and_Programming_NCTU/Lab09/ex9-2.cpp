#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
const int Maxsize=10;
int numrow, numcol;
void showarray (int, int, int[][Maxsize]);
void random (int [][Maxsize], int [][Maxsize]);
void mul (int [][Maxsize], int [][Maxsize], int [][Maxsize], int, int);
int main()
{
    srand(time(NULL));
    
    cout << "Please enter the number of rows and cols: " << endl;
    cin >> numrow >> numcol;
    
    int matrix1[Maxsize][Maxsize], matrix2[Maxsize][Maxsize];
    random(matrix1,matrix2);
    cout << "Matrix1" << endl;
    showarray(numrow,numcol,matrix1);
    cout << "Matrix2" << endl;
    showarray(numcol,numrow,matrix2);
    
    int matrix3[Maxsize][Maxsize]={0};
    mul(matrix1,matrix2,matrix3,numrow,numcol);
    cout << "Matrix3" << endl;
    showarray(numrow,numrow,matrix3);
    
    return 0;
}

void random (int mat1[][Maxsize], int mat2[][Maxsize])
{
    for (int i = 0; i < Maxsize; i++)
    {
        for (int j = 0; j < Maxsize; j++)
            mat1[i][j] = 1 + rand()%9;
    }

    for (int i = 0; i < Maxsize; i++)
    {
        for (int j = 0; j < Maxsize; j++)
            mat2[i][j] = 1 + rand()%9;
    }
}

void showarray(int row, int col, int mat[][Maxsize])
{
    cout << "rows: " << row << ", cols: " << col << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

void mul (int mat1[][Maxsize], int mat2[][Maxsize], int mat3[][Maxsize], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < col; k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

