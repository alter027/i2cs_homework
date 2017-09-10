#include <iostream>
#include <string>
using namespace std;

string Replace_Sub (string&, const string&, const string&);
int main()
{
    string s1, s2, s3;

    cout << "Please input three strings." << endl;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);

    cout << Replace_Sub(s1,s2,s3) << endl;

    return 0;
}

string Replace_Sub (string& s1, const string& s2, const string& s3)
{
    int record;
    record = s1.find(s2,0);
    s1.erase(record,s2.length());
    s1.insert(record,s3);
    
    return s1;
}
