#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int const lHalf = m + 1 - l;
    int const rHalf = r - m;
    int lArr[lHalf];
    int rArr[rHalf];
    for (int i = 0; i < lHalf; i++)
    {
        lArr[i] = arr[l + i];
    }
    for (int i = 0; i < rHalf; i++)
    {
        rArr[i] = arr[m + i + 1];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < lHalf && j < rHalf)
    {
        if (lArr[i] <= rArr[j])
        {
            arr[k] = lArr[i];
            i++;
        }
        else
        {
            arr[k] = rArr[j];
            j++;
        }
        k++;
    }
    while (i < lHalf)
    {
        arr[k] = lArr[i];
        i++;
        k++;
    }
    while (j < rHalf)
    {
        arr[k] = rArr[j];
        j++;
        k++;
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

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size;
    cout << "Enter size of the array!"
         << "\n";
    cin >> size;
    int arr[size];
    cout << "Enter elements of the array"
         << "\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int l = 0;
    int r = size;
    mSort(arr, l, r);
    print(arr, size);

    return 0;
}