#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    int a[t], count = 0;

    for (int i = 1; i <= t; i++)
    {
        if (t % i == 0)
        {
            count++;
        }
    }
    cout << count << endl;
    for (int i = 1; i <= t; i++)
    {
        if (t % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}