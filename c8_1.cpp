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
            cout << str << endl;
        }
        infile.close();
    }
};

int main(void)
{
    Phone phonebook;
    phonebook.addfile("karna", 12345);
    phonebook.addfile("kumar", 7865);
    phonebook.readfile();
    return 0;
}
