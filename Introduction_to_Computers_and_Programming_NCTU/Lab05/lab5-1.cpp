#include <iostream>
using namespace std;

int main()
{
    int idx = 0;

    while (idx < 10){
        idx++;
        if (idx == 5)
            continue;
        cout << idx << " ";
    }
    cout << endl;
    return 0;
}
