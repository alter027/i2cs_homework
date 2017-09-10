#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a sentence: " << endl;
    getline(cin,str);
    int pos = str.find("nctu");
    if (pos == string::npos)
    {
        cout << "nctu is not found!!" << endl;
    }
    else
    {
        cout << "nctu is found at pos: " << pos << endl;
    }
    cout << "Substring from str[2] to str[4] is " << str.substr(2,3)<< endl;
    return 0;
}
