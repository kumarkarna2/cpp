#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, p, q;
        cin >> a >> b >> p >> q;

        int aSkil = 1, bSkil = 1;
        while (a < p)
        {
            aSkil += 2;
            a += 2;
        }
        if (aSkil == p)
            cout << "yes"
                 << "\n";
        else
            cout << "no"
                 << "\n";
    }

    return 0;
}