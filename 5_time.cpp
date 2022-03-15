#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
    time_t begin, end;
    time(&begin);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int temp, i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    time(&end);
    cout << "\n"
         << "Total time taken by program to execute = " << difftime(end, begin)
         << "\n";

    return 0;
}