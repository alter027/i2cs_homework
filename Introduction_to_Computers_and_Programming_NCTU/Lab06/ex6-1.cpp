#include <iostream>
using namespace std;

double S1(int n);
double S2(int n);

int main()
{
    int n;

    cout << "Enter an integer value for the number of order n:" << endl;
    cin >> n;
    cout << "The result of S1 and S2 are:" << endl;
    cout << S1(n) << endl;
    cout << S2(n) << endl;

    return 0;
}

double S1(int n)
{
    double result = 0.0;
    for (int i = 1; i <= n; i++){
        result += 1.0/i;
    }
    return result;
}

double S2(int n)
{
    double result = 0.0, temp = 1.0;
    for (int i = 1; i <= n; i++){
        temp *= i;
        result += 1.0/temp;
    }
    return result;
}
