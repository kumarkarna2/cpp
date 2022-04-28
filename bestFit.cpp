#include <iostream>
#define lowest 999999;
using namespace std;
int a;
int b;

void input(int block_size[], int proces_size[])
{

    cout << endl;
    for (int i = 0; i < a; i++)
    {
        cout << "Enter size of block " << i << ": ";
        cin >> block_size[i];
    }
    cout << endl;
    for (int i = 0; i < b; i++)
    {
        cout << "Enter the size of process " << i << ": ";
        cin >> proces_size[i];
    }
}

void calculate(int *block_size, int *proces_size, int *block_num, int *fragment)
{
    int lowest;
    int temp, i, j;

    for (i = 0; i < b; i++)
    {
        for (j = 0; j < a; j++)
        {

            if (block_size[j] >= proces_size[i])
            {
                if ((block_size[j] - proces_size[i]) < lowest)
                {
                    lowest = block_size[j] - proces_size[i];
                    temp = j;
                }
            }
        }

        lowest = 999999;
        fragment[temp] = block_size[temp] - proces_size[i];
        block_num[i] = temp;
    }
}

int main()
{

    cout << "Enter total number of blocks: ";

    cin >> a;

    cout << "Enter total number of processes: ";

    cin >> b;

    int block_size[a], proces_size[b], block_num[b], fragment[a];

    cout << endl;
    for (int i = 0; i < a; i++)
    {
        cout << "Enter size of block " << i << ": ";
        cin >> block_size[i];
    }
    cout << endl;
    for (int i = 0; i < b; i++)
    {
        cout << "Enter the size of process " << i << ": ";
        cin >> proces_size[i];
    }

    for (int i = 0; i < a; i++)
    {
        fragment[a] = block_size[a];
    }

    calculate(block_size, proces_size, block_num, fragment);

    cout << "\nProcess_no\tProcess_size\tBlock_no\tBlock_size\tFragment";
    for (int i = 0; i < b; i++)
        cout << "\n"
             << i << "\t\t" << proces_size[i] << "\t\t" << block_num[i] << "\t\t" << block_size[block_num[i]] << "\t\t" << fragment[block_num[i]];

    return 0;
}