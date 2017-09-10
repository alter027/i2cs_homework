#include <iostream>
using namespace std;
int main()
{
    float score;
    char grade;
    cout << "Enter your score :" << endl;
    cin >> score;
    if ( score >= 80.0)
        grade = 'A';
    else if (score >= 70.0)
        grade = 'B';
    else if (score >= 60.0)
        grade = 'C';
    else
        grade = 'F';
    cout << "You get level " << grade << endl;
    return 0;
}
