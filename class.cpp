#include <bits/stdc++.h>
using namespace std;
void odd(int arr[], int len)
{
    cout << "Odd numbers in the array are - ";
    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << "\t";
        }
    }
}

void SumAverage(int arr[], int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    cout << "\n Sum     =" << sum;
    cout << "\n Average =" << sum / len;
}

void MaxMin(int arr[], int len)
{
    int max = arr[1], min = arr[0];

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "Maximum = " << max
         << "\t";
    cout << "Minimum = " << min;
}
void duplicate(int arr[], int n)
{
    if (n == 0 || n == 1)
        cout << "No Duplicates";

    sort(arr, arr + n);
    int temp[n];

    int j = 0;
    for (int i = 0; i < n - 1; i++)

        if (arr[i] != arr[i + 1])
            temp[j++] = arr[i];

    temp[j++] = arr[n - 1];

    for (int i = 0; i < j; i++)
        arr[i] = temp[i];

    for (int i = 0; i < j; i++)
    {
        cout << arr[i] << " ";
    }
}

void Reverse(int arr[], int len)
{
    cout << "\nArray in reverse"
         << " order:\n ";
    for (int i = len - 1; i >= 0; i--)
    {
        cout << arr[i] << "\t";
    }
}

void menu()
{
    cout << "1.odd\n2.Sumaverage\n3.Maxmin\n4.duplicate\n5.Reverse\n6.Exit";
}

void fillarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = 10 + (rand() % 90);
}

int main()
{
    int i, num, choice;
    cout << "Enter the size of an array :\n";

    cin >> num;
    cout << "Enter the elements of the array :\n";
    int *arr = new int(num);
    fillarray(arr, num);
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }

    do
    {
        cout << "\n";

        menu();
        cout << "\nEnter your "
             << "choice:\n";
        cin >> choice;

        switch (choice)
        {

        case 1:
            odd(arr, num);
            break;
        case 2:
            SumAverage(arr, num);
            break;
        case 3:
            MaxMin(arr, num);
            break;
        case 4:
            duplicate(arr, num);
            break;
        case 5:
            Reverse(arr, num);
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "INVALID CHOICE :-(";
        }

    } while (choice != 6);

    return 0;
}