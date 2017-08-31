#include <iostream>
#include <algorithm>
using namespace std;

double avg (int*, int);
double mid (int*, int);
int mode (int*, int);
int main()
{
    int stu_num, *ptr;

    cout << "How many students were surveyed?" << endl;
    cin >> stu_num;
    ptr = new int [stu_num];

    cout << "Now enter the number of movies each student has seen." << endl;
    for (int i = 0; i < stu_num; i++)
        cin >> ptr[i];
    sort(ptr,ptr+stu_num);

    cout << "Average: " << avg(ptr,stu_num) << endl;
    cout << "Median: " << mid(ptr,stu_num) << endl;
    cout << "Mode: " << mode(ptr,stu_num) << endl;

    return 0;
}

double avg (int* ptr, int size)
{
    double sum = 0.0;
    for (int i = 0; i < size; i++)
        sum += ptr[i];
    return sum / size;
}

double mid (int* ptr, int size)
{
    if (size % 2 == 0)
        return (ptr[size/2] + ptr[size/2 - 1])/2;
    else 
        return ptr[size/2];
}

int mode (int* ptr, int size) // this method is used for a "sorted" array!!!
{
    int mod = ptr[0], count = 1, max = -1;

    for (int i = 0; i < size-1; i++)
    {
        if (ptr[i] == ptr[i+1])
        {
            count++;
            if (count > max)
            {
                max = count;
                mod = ptr[i];
            }
        }
        else
            count = 1;
    }

    return mod;
}
