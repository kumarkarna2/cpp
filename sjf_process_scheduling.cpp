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

    for (int i = 0; i < num; i++)
    {
        cout << "Enter burst time of process : " << i + 1
             << "\n";
        cin >> pro[i];
    }

    int arriv[num];
    for (int i = 1; i <= num; i++)
    {
        cout << "Enter Arrival Time of process : " << i << "\n";
        cin >> arriv[i];
    }

    std::sort(arriv, arriv + num);

    for (int i = 0; i <= num; i++)
    {
        cout << arriv[i] << " ";
    }

    return 0;
}