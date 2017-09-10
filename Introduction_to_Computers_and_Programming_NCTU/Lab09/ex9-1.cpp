#include <iostream>
using namespace std;

int Count (const string);
void Print (const string, int);
int main()
{
    string str;
    int count;

    cout << "Enter a sentence:" << endl;
    getline(cin,str);
    
    count = Count(str);
    cout << "There are " << count << " words in your sentence." << endl;
    cout << "They are \"";
    Print(str,count);
    
    return 0;
}

int Count (const string str)
{
    int count = 1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            count++;
    }
    return count;
}

void Print (const string str, int count)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ' && count > 1)
        {
            if (count == 2)
                cout << "\"";
            else
                cout << "\", \"";
            count--;
        }
        else if (count == 1)
        {
            cout << " and \"";
            count--;
        }
        
        if (str[i] != ' ' && str[i] != '.')
            cout << str[i];
    }

    cout << "\"" << endl;
}
