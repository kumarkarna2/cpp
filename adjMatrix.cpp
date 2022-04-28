#include <bits/stdc++.h>
using namespace std;

int v = 0;
int choice()
{
    cout << "1. Yes\n2. No"
         << "\n";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        return 1;
        break;
    case 2:
        return 0;
        break;

    default:
        cout << "Invalid Choice"
             << "\n";
    }
}

void print(int v, int matrix[][])
{
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cout << matrix[i][j];
        }
        cout << " ";
    }
    cout << "\n";
}

int main()
{
    cout << "Enter number of Vertices"
         << "\n";
    int v;
    cin >> v;
    int matrix[v][v];
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cout << "Do yo want to connect an edge between matrix " << i << "&" << j << "\n";
            matrix[i][j] = choice();
        }
    }
    // for (int i = 0; i < v; i++)
    // {

    //     for (int j = 0; j < v; j++)
    //     {
    //         cout << matrix[i][j];
    //         cout << " ";
    //     }
    //     cout << "\n";
    // }

    print(v, matrix[v][v]);

    return 0;
}