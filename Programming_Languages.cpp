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
        int a, b, a1, a2, b1, b2;
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;

        if ((a == a1 || a == b1) && (b == a1 || b == b1))
        {
            cout << 1 << "\n";
        }
        else if ((a == a2 || a == b2) && (b == a2 || b == b2))

        {
            cout << 2 << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }

    return 0;
}