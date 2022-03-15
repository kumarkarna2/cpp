#include <bits/stdc++.h>
using namespace std;
#define MAX 500

int product(int x, int result[], int size)
{
    int carry = 0;
    int product;
    for (int i = 0; i < size; i++)
    {
        product = result[i] * x + carry;
        result[i] = product % 10;
        carry = product / 10;
    }
    while (carry > 0)
    {
        result[size] = carry % 10;
        carry /= 10;
        size++;
    }
    return size;
}

int main()
{
    int n;
    cin >> n;
    int result[MAX];
    result[0] = 1;
    int size = 1;
    for (int x = 2; x <= n; x++)
    {
        size = product(x, result, size);
    }

    for (int i = size - 1; i >= 0; i--)
    {
        cout << result[i];
    }

    return 0;
}