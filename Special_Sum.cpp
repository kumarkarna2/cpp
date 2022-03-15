#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    int rev = 0;
    while (n != 0)
    {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    return rev;
}

int getSum(int n)
{
    n = reverse(n);
    int sum = 0, flag = 1;

    while (n != 0)
    {
        if (flag % 2 != 0)
            sum += n % 10;
        else
            sum -= n % 10;
        n /= 10;
        flag++;
    }

    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << getSum(n) << endl;
    }
    return 0;
}