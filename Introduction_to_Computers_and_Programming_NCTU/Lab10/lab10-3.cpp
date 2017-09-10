#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib> //for exit(1)
using namespace std;

int main()
{
    string filename;
    cout << "Enter the filename:";
    cin >> filename;

    ifstream in_file;
    in_file.open(filename.c_str());
    if (in_file.fail())
    {
        cout << "File " << filename << "does not exist !!" << endl;
        exit(1);
    }

    int num;
    int count = 0;

    while (in_file >> num)
    {
        cout << count << ": " << num << endl;
        ++count;
    }

    in_file.close();
    return 0;
}
