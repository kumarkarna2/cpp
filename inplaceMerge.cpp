#include <iostream>
// #include <stdlib.h>
#include <ctime>
using namespace std;

void merge(int arr[], int begin, int mid, int end)
{

    int p1 = begin;
    int p2 = mid + 1;
    if (arr[mid] <= arr[p2])
    {
        return;
    }

    while (p1 < mid + 1 && p2 <= end)
    {
        if (arr[p1] <= arr[p2])
        {
            p1++;
        }
        else
        {
            int value = arr[p2];
            int index = p2;

            while (index != p1)
            {
                arr[index] = arr[index - 1];
                index--;
            }
            arr[p1] = value;

            p1++;
            mid++;
            p2++;
        }
    }
}

void mSort(int arr[], int l, int r)
{
    int m;

    if (r > l)
    {
        m = l + (r - l) / 2;
        mSort(arr, l, m);
        mSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void print(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    const int size = 10;
    int arr[size];

    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        arr[i] = 1 + rand() % 99;
    }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    cout << "\nBefore sorting\n";
    print(arr, size);

    cout << "\nAfter sorting\n";

    mSort(arr, 0, size - 1);
    print(arr, size);

    return 0;
}