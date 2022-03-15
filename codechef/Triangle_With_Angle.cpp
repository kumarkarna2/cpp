#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b + c) > 180 || (a + b + c) < 180)
        cout << "NO"
             << "\n";
    else if ((a + b + c) == 180)
    {
        if (a == 0 || b == 0 || c == 0)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}