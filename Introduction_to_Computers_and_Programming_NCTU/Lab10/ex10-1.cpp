#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream in_file;
    ofstream out_file;
    in_file.open("ex10-1.1.txt");
    out_file.open("ex10-1.out");

    int count = 0, NumOfWords;
    string str;
    while (getline(in_file,str))
    {
        count++;
        NumOfWords = 1;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ' ')
                NumOfWords++;
        }
        out_file << "line " << count << " has " << NumOfWords << " words, \"";
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] != ' ' && str[i] != '.')
                out_file << str[i];
            else if (str[i] == ' ')
                out_file << "\", \"";
        }
        out_file << "\"" << endl;
    }
    cout << "Done!!!" << endl;
    
    in_file.close();
    out_file.close();
    return 0;
}
