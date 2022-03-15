#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a, b, k;
        cin >> x >> y >> a >> b >> k;
        for (int i = 0; i < k; i++)
        {
            x += a;
            y += b;
        }

        if (x == y)
        {
            cout << "SAME PRICE"
                 << "\n";
        }
        else if (x <= y)
        {
            cout << "PETROL"
                 << "\n";
        }
        else if (x >= y)
        {
            cout << "DIESEL"
                 << "\n";
        }
    }

    return 0;
}