#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream in_file;
    in_file.open("lab10-1.txt");

    int vali;
    double vald;
    char valc[50];

    in_file >> vali >> vald >> valc;

    cout << "Integer number in file: " << vali << endl;
    cout << "Floating number in file: " << vald << endl;
    cout << "Character in file: " << valc << endl;

    in_file.close();
    return 0;
}
