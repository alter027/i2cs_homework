#include <iostream>
#include <string>
#include <sstream> //stringstream needs
using namespace std;

int main()
{
    int sum1, sum2, sum3;
    int square, cub;
    string str;
    stringstream ss;
    
    cout << "The positive integers less than 1000 such that its square and cube have digits that add up to the same number." << endl;
    
    for (int i = 1; i < 1000; i++)
    {
        sum1 = sum2 = sum3 = 0;
        
        ss << i;
        str = ss.str(); //transform int into string
        ss.str(""); //empty ss
        ss.clear();
        for (int j = 0; j < str.length(); j++)
            sum1 += str[j]-'0';
        
        ss << (i*i);
        str = ss.str();
        ss.str(""); 
        ss.clear(); 
        for (int j = 0; j < str.length(); j++)
            sum2 += str[j]-'0';

        if (sum1 != sum2)
            continue;

        ss << (i*i*i);
        str = ss.str();
        ss.str("");
        ss.clear();
        for (int j = 0; j < str.length(); j++)
            sum3 += str[j]-'0';
        
        if (sum1 == sum3)
            cout << i << endl;
    }

    return 0;
}
