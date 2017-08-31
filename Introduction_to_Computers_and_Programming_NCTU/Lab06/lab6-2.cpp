#include <iostream>
using namespace std;

void beginning();
void ending();

int main()
{
    beginning();
    return 0;
}

void beginning()
{
    cout << "It was the beginning..." << endl;
    ending();
}

void ending()
{
    cout << "...it was the ending." << endl;
}
