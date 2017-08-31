#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv)
{
    int num;

    if (argc == 1)
    {
        cout << "./ex12-4 [-d/-s/-t/-q] number" << endl;
        return 1;
    }
    else if (argc == 2)
    {
        num = atoi(argv[1]); //include <cstdlib>
        for (int i = 1; i <= num; i++)
            cout << i << " ";
    }
    else if (argc == 3)
    {
        num = atoi(argv[2]);
      
        if (strcmp(argv[1],"-s") == 0)
        {
            for (int i = 1; i <= num; i++)
                cout << i << " ";
        }
        else if (strcmp(argv[1],"-d") == 0)
        {
            for (int i = 1; i <= num; i++)
                cout << 2*i << " ";
        }
        else if (strcmp(argv[1],"-t") == 0)
        {
            for (int i = 1; i <= num; i++)
                cout << 3*i << " ";
        }
        else if (strcmp(argv[1],"-q") == 0)
        {
            for (int i = 1; i <= num; i++)
                cout << 4*i << " ";
        }
        else
            cout << "./ex12-4 [-d/-s/-t/-q] number" << endl;
    }

    return 0;
}
