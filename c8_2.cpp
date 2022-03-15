#include <iostream>
#include <fstream>
using namespace std;

class Phone
{

public:
    void addfile(string name, int number)
    {
        ofstream outfile;
        outfile.open("phone.txt", ios::app);
        outfile << name << "\t" << number << endl;
        outfile.close();
    }

    void readfile()
    {
        string str;
        ifstream infile;

        infile.open("phone.txt");

        while (infile)
        {
            getline(infile, str);
        }
        infile.close();
    }

    void findnumber(string name)
    {
        string iterator, number;
        int count = 0;
        ifstream infile;

        infile.open("phone.txt");

        while (infile.eof() == 0)
        {
            infile >> iterator;
            if (iterator == name)
            {
                count++;
                infile >> number;
                break;
            }
        }

        if (count)
            cout << "Found\n"
                 << number << endl;
        else
            cout << "Not Found" << endl;
        infile.close();
    }

    void findname(string number)
    {
        string iterator, name;
        int count = 0;
        ifstream infile;

        infile.open("phone.txt");

        while (infile.eof() == 0)
        {
            infile >> iterator;
            if (iterator == number)
            {
                count++;
                break;
            }
            name = iterator;
        }

        if (count)
            cout << "Found\n"
                 << name << endl;
        else
            cout << "Not Found" << endl;
        infile.close();
    }
};

int main()
{
    Phone phonebook;
    phonebook.findname("2345");
    phonebook.findnumber("karna");
    return 0;
}
