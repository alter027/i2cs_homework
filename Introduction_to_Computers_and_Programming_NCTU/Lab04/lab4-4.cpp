#include <iostream>
using namespace std;

int main()
{
    int reachcont = 1;
    while (reachcont)
    {
        char sym;
        cout << "Enter a symbol (a, b or c): ";
        cin >> sym;
        switch (sym)
        {

            case 'a':
            case 'b':
            case 'c':
                cout << "The symbol is " << sym << endl;
                reachcont = 0;
                break;
            default:
                cout << "The symbol is not a, b, or c." << endl;
                break;
        }
    }

    return 0;
}
