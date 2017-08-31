#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ifstream in_file("ex10-2.1.txt");
    ofstream out_file("ex10-2.out.txt");
    int count = 0;
    string str;
    
    while (in_file >> str)
    {
        count += str.length() + 1; //+1 : for space
        int flg = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ',')
                flg = 1;
        }
        
        if (count > 60 && flg == 0)
        { 
            out_file << '\n';
            count = str.length() + 1;
        }

        for (int i = 0; i < str.length(); i++)
        {
            out_file << str[i];
            if (str[i] == '.')
            {
                out_file << '\n';
                count = str.length() - i;
            }
            else if (str[i] == ',' && str[0] != '$')
            {
                out_file << " ";
                if (count + (str.length()-i) >= 60)
                {
                    out_file << '\n';
                    count = str.length() - i - 1;
                }
                count++;
            }
        }
        out_file << " ";
    }
    cout << "Done!!!" << endl;

    in_file.close();
    out_file.close();

    return 0;
}
