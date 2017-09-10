#include <iostream>
#include <stdlib.h>
using namespace std;

void ShowElement(int arr[], int size);
void Match(int arr1[], int arr2[], int size);
int main()
{
    int WinDigits[5], Player[5];
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        WinDigits[i] = rand()%10;
        for (int j = 0; j < i; j++)
        {
            while (WinDigits[j] == WinDigits[i])
                WinDigits[i] = rand()%10;
        }
    }
    cout << "Please input 5 numbers: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> Player[i];
    }
    
    cout << "winningDigits: ";
    ShowElement(WinDigits,5);
    cout << "Player: ";
    ShowElement(Player,5);
    Match(WinDigits,Player,5); 

    return 0;
}

void ShowElement (int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Match (int arr1[], int arr2[], int size)
{
    int count = 0;
    cout << "Matching numbers: ";
    for (int i = 0; i < size; i++)
    {
        if (arr1[i] == arr2[i])
        {
            cout << "element " << i << " ";
            count++;
        }
    }
    if (count == 0)
        cout << "None";
    cout << endl << "There are " << count << " numbers matching." << endl; 
}
