#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "please enter the size of rectangle" << endl;
    cin >> a;
    for (int i = 1; i <= a; i++){
        if (i == 1 || i == a){
            for (int j = 1; j <= a; j++)cout << "*";
        }
        else{
            for (int j = 1; j <= a; j++)
                if (j == 1 || j == a)cout << "*";
                else cout << " ";
        }
        cout << endl;
    }

    //system("pause");
    return 0;
}
