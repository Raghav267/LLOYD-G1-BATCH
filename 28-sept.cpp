#include <iostream>
using namespace std;
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    arr[9] = 10;
    cout << endl;
}

int main()
{
    // int arr[10];
    // int secondArr[10] = {1, 2, 3, 4, 5};

    // cout << "Enter 5 numbers: \n";
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }

    // cout
    //     << "Array elements are: ";
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // cout << "Second array elements are: ";
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << secondArr[i] << " ";
    // }

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printArray(arr, 10);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    int newArr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int start = 0;
    int end = 8;
    while (start < end)
    {
        swap(newArr[start], newArr[end]);
        start++;
        end--;
    }
    // cout << *(arr - 1) << endl;
    // cout << arr[-1] << endl;

    return 0;
}