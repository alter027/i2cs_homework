#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   cout << "The original number is " << 716.54564 << endl;     

   cout << "The number with set precision 3 is "
        << setprecision(3) << 716.54564 << endl;

   cout << "The number with set precision 6 is "
        << setprecision(6) << 716.54564 << endl;

   cout << "The number in showpoint decimal notation is "
        << setw(10) << showpoint << setprecision(6)
        << 716.54564 << endl;

   cout << "The number in fix-point decimal notation is "
        << setw(10) << fixed << setprecision(6)
        << 716.54564 << endl;

   cout << "The number in exponential notation is "
        << setw(10) << scientific << setprecision(3)
        << 716.54564 << endl;

   return 0;
}
