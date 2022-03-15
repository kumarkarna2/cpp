#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int flag = 0;

        int length = size(str);
        for (int i = 0; i < length; i++)
        {
            if (str[i] != str[length - (i + 1)])
                flag = 1;
            break;
        }
        if(flag)
        {
            cout<<"NO"<<"\n";
        }
        else
        cout<<"YES"<<"\n";
    }
    return 0;
}