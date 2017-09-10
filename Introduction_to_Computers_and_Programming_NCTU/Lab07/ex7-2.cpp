#include <iostream>
using namespace std;

int gcd (int, int);
int lcm (int, int);
void Count (int&, int&, int);
int main()
{
    int arr[5], GCD, LCM;

    cout << "Input five integer number." << endl;
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    GCD = LCM = arr[0];
    for (int i = 1; i < 5; i++)
        Count(GCD,LCM,arr[i]);
 
    cout << "g.c.d. : " << GCD << endl;
    cout << "l.c.m. : " << LCM << endl;
    
    return 0;
}

int gcd (int n1, int n2)
{
    if (n1 % n2 == 0)
        return n2;
    else
        return gcd(n2,n1%n2);
}

int lcm (int a, int b)
{
    return a*b/gcd(a,b);
}

void Count (int& GCD, int& LCM, int num)
{
    GCD = gcd(GCD,num);
    LCM = lcm(LCM,num);
}
