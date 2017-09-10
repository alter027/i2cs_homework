#include <iostream>
using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

void ShowSeconds(const Time &now);
Time SetTime();
int main()
{
    Time t = {0, 0, 0};
    t = SetTime();

    ShowSeconds(t);

    return 0;
}

Time SetTime()
{
    Time now;
    cout << "Please Enter Current Time:" << endl;
    cout << "Current hour:";
    cin >> now.hours;
    cout << "Current minute:";
    cin >> now.minutes;
    cout << "Current second:";
    cin >> now.seconds;

    return now;
}

void ShowSeconds(const Time &now)
{
    int seconds = 0;
    seconds = now.hours * 3600 + now.minutes * 60 + now.seconds;
    cout << "Total seconds of today: " << seconds << endl;

    /*now.hours = 12;
    seconds = now.hours * 3600 + now.minutes * 60 + now.seconds;
    cout << "Total seconds of new: " << seconds << endl;*/
}
