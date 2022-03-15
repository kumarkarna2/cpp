#include <bits/stdc++.h>
using namespace std;
int Search(int arr[], int low, int high, int key)
{
    if (low == high)
    {
        if (arr[low] == key)
            return low;
        else
            return 0;
    }
    else
    {
        int mid = (low + high) / 2;
        if (key == arr[mid])
            return mid;
        if (key < arr[low])
            return Search(arr, low, mid - 1, key);
        else
            return Search(arr, mid + 1, high, key);
    }
}
int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter key"
         << "\n";
    cin >> key;

    sort(arr, arr + size);
    cout << "result = " << Search(arr, 0, size - 1, key);

    return 0;
}