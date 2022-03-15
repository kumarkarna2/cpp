#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    ll oddSum = 0, evenSum = 0;
    cin >> n;

    oddSum = n * n;
    evenSum = oddSum + n;

    cout << oddSum << " " << evenSum;

    return 0;
}