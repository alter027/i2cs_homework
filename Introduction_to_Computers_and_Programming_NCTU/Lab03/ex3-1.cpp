#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    
    char x, y;
    int temp;

    cout << "Enter s, r, p for player 1: ";
    cin >> x;
    cout << "Enter s, r, p for player 2: ";
    cin >> y;
    
    if (x == y)
        cout << "Two players tie!" << endl;
    else if ((x=='s' && y=='p') || (x=='p' && y=='r') || (x=='r' && y=='s'))
        cout << "Player 1 win!" << endl;
    else
        cout << "Player 2 win!" << endl;
    
    return 0;
}
