#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(NULL));
    int num;

    cout << "Please enter a number: ";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        arr[i] = i+1;
    }

    for (int i = 0; i < 100; i++)
    {
        int record1 = rand()%num;
        int record2 = rand()%num;
        int temp = arr[record1];
        arr[record1] = arr[record2];
        arr[record2] = temp;
    }
    
    for (int i = 0; i < num; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
