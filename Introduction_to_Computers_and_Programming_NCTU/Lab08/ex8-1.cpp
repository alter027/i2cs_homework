#include <iostream>
using namespace std;

struct student{
    long id;
    char gender;
    int age;
    int money;
};

int main()
{
    int sum = 0;
    double avg = 0.0;
    student a = {9413599, 'M', 25, 10001};
    student b = {9513622, 'M', 22, 500};
    student c = {9613812, 'F', 20, 30};
    student d = {9713964, 'F', 18, 66000};
    student e;

    cout << "Please enter your student id: ";
    cin >> e.id;
    cout << "Gender (M/F): ";
    cin >> e.gender;
    cout << "Age: ";
    cin >> e.age;
    cout << "The amount of money in your own: ";
    cin >> e.money;
    student group[5];
    group[0] = a;
    group[1] = b;
    group[2] = c;
    group[3] = d;
    group[4] = e;
    
    for (int i = 0; i < 5; i++)
    {
        sum += group[i].money;
        avg += group[i].age;
        cout << "id " << group[i].id << " is a ";
        if (group[i].age < 21)
            cout << "young & ";
        else 
            cout << "adult & ";

        if (group[i].money < 10000)
            cout << "poor ";
        else
            cout << "rich ";

        if (group[i].gender == 'M')
            cout << "Male!" << endl;
        else if (group[i].gender == 'F')
            cout << "Female!" << endl;
    }
    avg /= 5.0;
    cout << "This group is " << avg << "years old in average." << endl;
    cout << "This group has $" << sum << " now." << endl;

    return 0;
}
