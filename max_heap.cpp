#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int i, int size)
{
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;

    if (left < size && arr[left] > arr[largest])
    {
        largest = left;
    }

    if (right < size && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, largest, size);
    }
}

void maxHeap(int arr[], int size)
{
    // last internal node i = (n/2)-1
    for (int i = (size / 2) - 1; i >= 0; i--)
    {
        heapify(arr, i, size);
    }
}
void Sort(int arr[], int size)
{

    maxHeap(arr, size);
    for (int i = size - 1; i >= 0; i--)
    {
        std::swap(arr[i], arr[0]);
        heapify(arr, 0, i);
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
    cout << "Enter size"
         << "\n";
    cin >> size;
    int arr[size];
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        arr[i] = 1 + rand() % 99;
    }
    cout << "Original tree"
         << "\n";
    print(arr, size);
    cout << "\nMax heap tree"
         << "\n";
    maxHeap(arr, size);
    print(arr, size);

    Sort(arr, size);
    cout << "\nSorted tree"
         << "\n";
    print(arr, size);
    return 0;
}