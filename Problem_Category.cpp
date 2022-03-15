#include <bits/stdc++.h>
using namespace std;

void check(int x)
{
    if (1 <= x && x < 100)
    {
        cout << "Easy"
             << "\n";
    }
    else if (100 <= x && x < 200)
    {
        cout << "Medium"
             << "\n";
    }
    else if (200 <= x && x <= 300)
    {
        cout << "Hard"
             << "\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        check(x);
    }

    return 0;
}