#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int max = INT_MIN;
    int min = INT_MAX;
    int ssecond_max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            ssecond_max = max;
            max = arr[i];
        }
        else if (arr[i] > ssecond_max && arr[i] < max)
        {
            ssecond_max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;
    cout << "Second Maximum: " << ssecond_max << endl;
}