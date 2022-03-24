#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        if (x % 4 == 0)
        {
            cout << "North"
                 << "\n";
        }
        else if (x % 4 == 3)
        {
            cout << "West"
                 << "\n";
        }
        else if (x % 4 == 2)
        {
            cout << "South"
                 << "\n";
        }
        else
        {
            cout << "East"
                 << "\n";
        }
    }

    return 0;
}