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
    temp = rand()%3 + 1;
    switch (temp){
        case 1:
            y = 's';
            break;
        case 2:
            y = 'r';
            break;
        case 3:
            y = 'p';
            break;
    }
    cout << y << endl;
    if (x == y)
        cout << "Two players tie!" << endl;
    else if ((x=='s' && y=='p') || (x=='p' && y=='r') || (x=='r' && y=='s'))
        cout << "Player 1 win!" << endl;
    else
        cout << "Player 2 win!" << endl;
    
    return 0;
}
