#include <iostream>
using namespace std;

int main()
{
    char choice; 
    int num;

    cout << "Welcome to the book-buying system!!" << endl;
    cout << "The following are the list and the cost:" << endl;
    cout << "(A) Computer Science: An Overview\t$30" << endl;
    cout << "(B) Absolute C++\t$20" << endl;
    cout << "(C) C++ How to Program\t$40" << endl;
    cout << "Please enter A, B, C to choose the book:" << endl;
    cin >> choice;
    choice = toupper(choice);
    
    switch (choice)
    {
        case'A': case'B': case'C':
            cout << "Now enter the quantity of books:" << endl;
            cin >> num;
            break;
        default:
            cout << "Sorry, item (" << choice << ") doesn't on our list." << endl;
            return 1;
    }
    
    switch(choice)
    {
        case'A':
            cout << "The total cost of item (A) is $" << num*30 << ". Thanks for your coming." << endl;            
            break;
        case'B':
            cout << "The total cost of item (B) is $" << num*20 << ". Thanks for your coming." << endl;            
            break;
        case'C':
            cout << "The total cost of item (A) is $" << num*40 << ". Thanks for your coming." << endl;            
            break;
    }

    return 0;
}
