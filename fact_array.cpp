#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 500

int multiply(int x, int result[], int result_size)
{
    int carry = 0;
    for (int i = 0; i < result_size; i++)
    {
        int prod = result[i] * x + carry;
        result[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry > 0)
    {
        result[result_size] = carry % 10;
        carry = carry / 10;
        result_size++;
    }
    return result_size;
}

void fact(int n)
{
    int result[MAX_SIZE];
    int result_size = 1;
    result[0] = 1;
    for (int i = 2; i <= n; i++)
    {
        result_size = multiply(i, result, result_size);
    }
    for (int i = result_size - 1; i >= 0; i--)
        cout << result[i];
}

int main()
{
    int n;
    cin >> n;
    fact(n);

    return 0;
}