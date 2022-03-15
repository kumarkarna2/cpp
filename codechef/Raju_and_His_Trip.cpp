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
    if (t % 5 == 0 || t % 6 == 0)
        cout << "YES"
             << "\n";
    else
    {
        cout << "NO"
             << "\n";
    }

    return 0;
}