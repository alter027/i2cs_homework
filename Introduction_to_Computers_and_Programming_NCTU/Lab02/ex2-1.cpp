#include <iostream>
using namespace std;

int main(){
    int x, y;
    
    cout << "Enter the first number:" << endl;
    cin >> x;
    cout << "Enter the second number:" << endl; 
    cin >> y;
    
    cout << x << " + " << y << " = " << (x + y) << endl;
    cout << x << " - " << y << " = " << (x - y) << endl;
    cout << x << " * " << y << " = " << (x * y) << endl;
    cout << x << " / " << y << " = " << (x / y) << endl;
    
    return 0;
}
