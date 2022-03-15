#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll l, r;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        if (i % 2 != 0)
            cout << i << " ";
    }

    return 0;
}