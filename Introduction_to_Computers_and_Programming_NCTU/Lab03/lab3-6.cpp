#include <iostream>
using namespace std;

int main()
{
    char sym;
    cout << "Enter a symbol:" << endl;
    cin >> sym;
    switch (sym)
    {
        case 'a':
            cout << "The symbol is one 'a'." << endl;
            break;
        case 'b':
            cout << "The symbol is one 'b'." << endl;
            break;
        case 'c':
            cout << "The symbol is one 'c'." << endl;
            break;
        default:
            cout << "The symbol is not 'a', 'b', or 'c'." << endl;
            break;
    }

    return 0;
}
