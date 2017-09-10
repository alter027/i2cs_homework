#include <iostream>
using namespace std;

void sumavg(double, double, double, double&, double&);
int main()
{
    double n1, n2, n3, sum, avg;
    sum = 0.0;
    avg = 0.0;
    cout << "Please enter score of three students" << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    sumavg(n1,n2,n3,sum,avg);
    cout << "The total score of three students is " << sum << endl;
    cout << "The average score of three students is " << avg << endl;
    return 0;
}
void sumavg(double n1, double n2, double n3, double& sum, double& avg)
{
    sum = n1 + n2 + n3;
    avg = (n1 + n2 + n3) / 3;
}
