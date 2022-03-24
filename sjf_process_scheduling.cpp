#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int num;
    cout << "Enter # of processes"
         << "\n";
    cin >> num;
    int pro[num];
    int wait[num];
    wait[0] = 0;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter burst time of process : " << i + 1
             << "\n";
        cin >> pro[i];
    }

    // int arriv[num];
    // for (int i = 1; i <= num; i++)
    // {
    //     cout << "Enter Arrival Time of process : " << i << "\n";
    //     cin >> arriv[i];
    // }

    std::sort(pro, pro + num);

    for (int i = 0; i < num; i++)
    {
        cout << wait[i]
             << "\n";
        wait[i] = pro[i];
    }
    for (int i = 0; i < num; i++)
    {
        cout << wait[i] << "\t";
    }

    return 0;
}