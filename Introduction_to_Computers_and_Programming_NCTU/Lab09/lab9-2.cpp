#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char stringA[20] = {'C','+','+','\0'};
    char stringB[20] = "Programming";

    cout << "length of " << stringA << " is " << strlen(stringA) << endl;
    cout << "length of " << stringB << " is " << strlen(stringB) << endl;

    char stringC[20];

    //Copy stringA to stringC
    strcpy(stringC, stringA);
    cout << stringC << endl;

    //Concatenate " " and stringB to stringC
    strcat(stringC, " ");
    strcat(stringC, stringB);
    cout << stringC << endl;

    //Clear StringC
    strcpy(stringC, "");

    //compare characters of two strings
    cout << "Enter a new word :";
    cin.getline (stringC, 20);
    cout << stringC << endl;
    cout << stringB << endl;
    if(strcmp(stringC, stringB)==0)
        cout << "the two strings are same!" << endl;
    else
        cout << "the two strings are different @@" << endl;

    return 0;
}


