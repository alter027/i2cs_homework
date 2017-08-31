#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

struct student{
    string name;
    string id;
    int age;
    char gender;
};

double avg (student*, int);
int main(int argc, char** argv)
{
    int flg1 = 0, flg2 = 0;
    ifstream in_file;
    ofstream out_file;
    
    if (argc == 1)
    {
        cout << "Usage: ./ex12-2 [-i] input_filename [-o] output_filename" << endl;
        return 1;
    }

    for (int i = 0; i < argc; i++)
    {
        if (strcmp(argv[i],"-i") == 0)
        {
            in_file.open(argv[i+1]);
            if (in_file.fail())
                cout << "File " << argv[i+1] << " does not exist." << endl;
            flg1 = 1;
        }
        else if (strcmp(argv[i],"-o") == 0)
        {
            out_file.open(argv[i+1]);
            cout << "Write output in " << argv[i+1] << "." << endl;
            flg2 = 1;
        }
    }
    
    if (flg1 == 0)
    {
        cout << "Input file is required." << endl;
        return 1;
    }
    if (flg2 == 0)
    {
        out_file.open("test.txt");
        cout << "Write output in test.txt file." << endl;
    }
    int num, M_num = 0, F_num = 0;
    in_file >> num;
    student *uee1302 = new student [num];
    for (int i = 0; i < num; i++)
    {
        in_file >> uee1302[i].name >> uee1302[i].id >> uee1302[i].age >> uee1302[i].gender;
        if (uee1302[i].gender == 'M')
            M_num++;
        else
            F_num++;
    }

    out_file << "There are: ";
    for (int i = 0; i < num; i++)
    {
        out_file << uee1302[i].name;
        if (i == num-2)
            out_file << " and ";
        else if (i == num-1)
            out_file << "";
        else
            out_file << ", ";
    }
    out_file << endl << "Their average age is: " << fixed << setprecision(1) << avg(uee1302,num) << " years old." << endl;
    out_file << "There are " << M_num << " boys and " << F_num << " girls." << endl;

    in_file.close();
    out_file.close();
    delete []uee1302;
    
    return 0;
}

double avg (student* sptr, int size)
{
    double sum = 0.0;
    for (int i = 0; i < size; i++)
        sum += sptr[i].age;
    return sum/size;
}
