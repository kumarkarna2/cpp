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
    int n[t];
    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
    }
    for (int i = t - 1; i >= 0; i--)
    {
        cout << n[i] << " ";
    }

    return 0;
}