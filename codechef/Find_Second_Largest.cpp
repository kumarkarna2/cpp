#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b, c;
    cin >> a >> b >> c;
    if ((a > b && a < c) || (a > c && a < b))
    {
        cout << a;
    }
    else if ((b > c && b < a) || (b > a && b < c))
    {
        cout << b;
    }
    else
        cout << c;

    return 0;
}