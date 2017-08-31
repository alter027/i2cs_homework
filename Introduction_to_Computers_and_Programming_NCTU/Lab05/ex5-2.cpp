#include <iostream>
using namespace std;

int GCD (int x, int y){
    while(y){
        int r = x % y;    
        x = y;
        y = r;
    }
    return x;
}

int main()
{
    int x, y;
    int gcd, lcm;

    cout << "Input value 1: " << endl;
    cin >> x;
    cout << "Input value 2: " << endl;
    cin >> y;
    
    gcd = GCD(x,y);
    lcm = x*y/gcd;

    cout << "g.c.d.: " << gcd << endl;
    cout << "l.c.m.: " << lcm << endl;

    return 0;
}
