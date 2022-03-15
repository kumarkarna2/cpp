#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int alice = a * 4 - b;
    int bob = c * 4 - d;
    if (alice > bob)
    {
        cout << "Alice"
             << "\n";
    }
    else if (bob > alice)
    {
        cout << "Bob"
             << "\n";
    }
    else
    {
        cout << "Tie"
             << "\n";
    }
    return 0;
}