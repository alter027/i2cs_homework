#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        cout << "Usage: ./lab10-6 <filename> <target> <replace>" << endl;
        return 1;
    }
    fstream out(argv[1], ios::in | ios::out);
    if (out.fail())
    {
        cout << "Cannot open the file " << argv[1] << endl;
        return 1;
    }

    out.seekp(atoi(argv[2]),ios::beg);
    out.put(*argv[3]);

    return 0;
}
