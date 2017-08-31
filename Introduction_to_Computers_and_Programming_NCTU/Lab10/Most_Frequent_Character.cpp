#include <iostream>
#include <string>
using namespace std;

char MostFreqChar(const string);

int main()
{
    string str;
    cout << "Please input a string:" << endl;
    getline(cin,str);
    cout << "The character appearing most frequently in the string is: " << MostFreqChar(str) << endl;

    return 0;
}

char MostFreqChar (const string str)
{
    int temp, max = -1, record;
    int carr[128] = {0};
    char ch; 

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            temp = (int)str[i]; //transfer to arcii code!
            carr[temp]++;
        }
    }
    for (int i = 0; i < 128; i++)
    {
        if (carr[i] > max)
        {
            max = carr[i];
            record = i;
        }
    }

    ch = (char)record; 
    return ch;
}
