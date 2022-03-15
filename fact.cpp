#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int fact = 1;
    int size;
    cin >> size;

    for (int i = 1; i <= size; i++)
    {
        fact *= i;
    }
    cout << fact;

    return 0;
}