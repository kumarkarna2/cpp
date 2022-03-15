#include <iostream>
using namespace std;

void insertion_sort(int A[], int size, int *analyser)
{
    int i, j, x;
    for (i = 1; i < size; i++)
    {
        j = i - 1;
        x = A[i];
        while (j > -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
            (*analyser)++;
        }
        A[j + 1] = x;
    }
}

void display_elements_arr(int A[], int x)
{
    cout << "| ";
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " | ";
    }
    cout << endl;
}

void fill_array(int A[], int size)
{
    int i;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter data at position " << i << " : ";
        cin >> A[i];
    }
}

int main()
{
    int size, analyser = 0;
    cout << "Enter size: ";
    cin >> size;
    int *A = new int(size);
    fill_array(A, size);
    display_elements_arr(A, size);
    insertion_sort(A, size, &analyser);
    display_elements_arr(A, size);
    cout << "\nNumber of swaps done : " << analyser << endl;
    return 0;
}
