#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a, b, c;
    cin >> a >> b >> c;
    double s = (a + b + c) / 2;
    long double area = sqrt(s * (s - a) * (s - b) * (s - c));
    if (area > 0)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";

    return 0;
}