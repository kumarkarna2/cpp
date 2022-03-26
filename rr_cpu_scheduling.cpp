#include <bits/stdc++.h>
using namespace std;

void find_avg(int process[],int num, int t)
{
    int wt[num];
    int tat[num];
   int wt = 0;
   int tat = 0;

   
}

int main()
{
    int num;
    cout << "Enter # of processes"
         << "\n";
    cin >> num;
    int process[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter burst time of process " << i + 1
             << "\n";
        cin >> process[i];
    }
    int t;
    cout << "Enter Time slice"
         << "\n";
    cin >> t;

    find_avg(process, num, t);
    return 0;
}