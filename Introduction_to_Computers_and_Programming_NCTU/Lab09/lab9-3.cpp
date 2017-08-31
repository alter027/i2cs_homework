#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    char str[80] = "";
    cout << "Enter a sentence: " << endl;
    cin.getline(str,80);

    int numalpha = 0;
    int numspace = 0;
    int numdigit = 0;
    int len = 80;

    for (int idx=0; idx<len; idx++)
    {
        char c = str[idx];
        if (isalpha(c))
        {
            str[idx] = toupper(c);
            ++numalpha;
        }
        else if (isdigit(c))
        {
            ++numdigit;
        }
        else if (isspace(c))
        {
            ++numspace;
        }
    }

    cout << "New sentence is: " << endl;
    cout << str << endl;
    cout << "Number of alphas is " << numalpha << endl;
    cout << "Number of digits is " << numdigit << endl;
    cout << "Number of spaces is " << numspace << endl;

    return 0;
}
