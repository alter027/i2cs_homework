#include <iostream>
#include <cmath>
using namespace std;

double PresentValue (const int, const double, const int);
int main()
{
    int F, n;
    double r;

    cout << "Please input the future value that you want in the account." << endl;
    cin >> F;
    cout << "Please input the annual interest rate(expressed in decimal form, such as 0.042)." << endl;
    cin >> r;
    cout << "Please input the number of years that you plan to let the money sit in the account." << endl;
    cin >> n;

    cout << "The amount that you need to deposit today is: " << PresentValue(F,r,n) << endl;

    return 0;
}

double PresentValue (const int F, const double r, const int n)
{
    double P;
    P = F / pow((1 + r),n);
    return P;
}
