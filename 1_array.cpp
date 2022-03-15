#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

void print(int arr);
void insert();
void pop();
void findEven();
void findOdd();
void reverse();
void max();
void min();

void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\n";
    }
}

int *insert(int arr[], int size)
{
    int num, at;
    cout << "Enter the number you want to insert!"
         << "\n";
    cin >> num;
    cout << "Enter position of insertion!"
         << "\n";
    cin >> at;
    for (int i = size + 1; i > at; i--)
    {
        arr[at - 1] = num;
    }
    for (int i = 0; i < size + 1; i++)
    {
        cout << arr[i] << " ";
    }

    return arr;
}
int main()
{
    srand((unsigned)time(NULL));

    int n;
    cout << "Enter size of array!"
         << "\n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 1 + (rand() % 99);
    }

    while (1)
    {
        int size = sizeof(arr) / sizeof(arr[0]);
        cout << "Select operation from menu!"
             << "\n";
        cout << "1. Print the array\n2. Insert an element in the array\n3. Delete an element from the array\n4.Reverse the array\n5. Find Maximum of the array\n6. find the minimum of the array\n7. Find all even numbers\n8. Find all odd numbers\n9. Exit from the menu\n";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            print(arr, size);
            break;
        case 2:
            insert(arr, size);
            break;

        default:
            exit(0);
        }
    }

    return 0;
}
