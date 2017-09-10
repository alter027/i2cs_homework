#include <iostream>
using namespace std;

void convert (long int);
int main()
{
    long dic;
    cout << "Enter a dicimal number:" << endl;
    cin >> dic;
    
    if (dic < 0)
    {
        cout << "Exit!!" << endl;
        return 0;
    }

    cout << "The binary value of " << dic << " is ";
    convert(dic);

    return 0;
}

void convert (long int dic)
{
    char* str;
    int count = 0, r;

    if (dic == 0)
        cout << "0";

    while (dic > 0)
    {
        r = dic/2;
        str[count++] = '0' + dic%2;
        dic = r;
    }

    for (int i = count-1; i >= 0; i--)
        cout << str[i];
}
