#include <bits/stdc++.h>
using namespace std;
int main()
{

    // int arr[] = {9, 11, 14, -2, 5, 0, -1, 3, 7, 8};
    // int k = 4;
    // int sum = 0;

    // for (int i = 0; i < 10 - k; i++)
    // {

    //     for (int j = i; j < i + k; j++)
    //     {

    //         cout << arr[j] << " ";
    //         sum += arr[j];
    //     }
    //     cout << endl;
    // }
    // cout << "The Sum of the subarray is: " << sum << endl;

    // for (int i = 0; i < k; i++)
    // {
    //     sum += arr[i];
    // }
    // int ans = sum;
    // int l = 0;

    // for (int i = k; i < 10; i++)
    // {
    //     sum = sum + arr[i];
    //     sum = sum - arr[l];
    //     l++;
    //     ans = max(ans, sum);
    // }
    // cout << "The Maximum Sum of the subarray is: " << ans << endl;

    int arr[] = {7, 4, 3, 9, 1, 8, 5, 2, 6};
    int k = 3;
    int sum = 0;
    int ans[9];

    for (int i = 0; i < 9; i++)
    {
        int leftKElementPresent = i - k;
        int rightKElementPresent = i + k;
        if (leftKElementPresent >= 0 && rightKElementPresent < 9)
        {
            for (int j = leftKElementPresent; j <= rightKElementPresent; j++)
            {
                sum += arr[j];
            }
            ans[i] = sum / (2 * k + 1);
        }
        else
        {
            ans[i] = -1;
        }
    }
}