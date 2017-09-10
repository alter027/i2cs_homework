#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[80];
    char str2[80];

    cout << "Enter a sentence: ";
    cin.getline(str1,80);

    cout << "Enter another sentence: ";
    cin.getline(str2,80);

    if(strcmp(str1,str2))
    {
        cout << str1 << " != " << str2 << endl;
    }
    else
    {
        cout << str1 << " == " << str2 << endl;
    }

    return 0;
}
