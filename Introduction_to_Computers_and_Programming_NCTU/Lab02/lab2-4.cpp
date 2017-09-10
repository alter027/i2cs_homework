#include <iostream>
using namespace std;

int main()
{
    char a;
    int b;
    float c;
    double d;

    cout << "Bytes of one character:\t" << sizeof(a) << endl
         << "Bytes of one integer:\t" << sizeof(b) << endl
         << "Bytes of one float:\t" << sizeof(c) << endl
         << "Bytes of one double:\t" << sizeof(d) << endl;
    
    return 0;
}
