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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= k)
            {
                k -= arr[i];
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }

    return 0;
}