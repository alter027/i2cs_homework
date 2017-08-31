#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("lab10-4.txt",ios::app);
    myfile << "new words" << endl;
    myfile.close();

    return 0;
}
