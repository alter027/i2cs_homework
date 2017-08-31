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
    if (score >= 70.0 && score < 80.0) //after correction
        grade = 'B';
    if (score >= 60.0 && score < 70.0) //after correction
        grade = 'C';
    if (score < 60.0)
        grade = 'F';

    cout << "You get level " << grade << endl;
    return 0;
}
