#include <iostream>
#include <iomanip>

using namespace std;

void rectangular(void);
void square(void);
void circle(void);

int main()
{
    int type;
    cout << "1.Rectangular 2.Square 3.Circle 4.Exit" << endl;
    cout << "Choose the type of perimeter you want to calculate:" << endl;
    cin >> type;
    switch (type){
        case 1:
            rectangular();
            break;
        case 2:
            square();
            break;
        case 3:
            circle();
            break;
        case 4:
            cout << "Goodbye!" << endl;
            return 0;
        default:
            cout << "Please follow the instruction carefully." << endl;
            break;
    }
    return 0;
}

void rectangular(void)
{
    double len, wid, result;
    cout << "Please enter the Length and Width respectively." << endl;
    cin >> len >> wid;
    result = (len + wid)*2;
    cout << fixed << setprecision(3);
    cout << "The perimeter of a rectangular with (Length,Width) = (" << len << ", " << wid << ") is " << result;  

    return;
}

void square(void)
{
    double len, result;
    cout << "Please enter the Length." << endl;
    cin >> len;
    result = 4*len;
    cout << fixed << setprecision(3);
    cout << "The perimeter of a square with (Length) = (" << len << ") is " << result << endl;

    return;
}   

void circle(void)
{
    const double PI = 3.1415926; 
    double radius, result;
    cout << "Please enter the radius of the circle." << endl;
    cin >> radius;

    result = 2*PI*radius;
    cout << fixed << setprecision(3);
    cout << "The perimeter of a circle with (Radius) = (" << radius << ") is " << result << endl;
    return;
}
