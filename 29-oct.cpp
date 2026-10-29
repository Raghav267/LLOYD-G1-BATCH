#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int numSubarrayProductLessThanK(vector<int>& nums, int k) {

//         int l = 0, r;
//         int prod = 1;
//         int count = 0;
//         for(r = 0;r<nums.size(); r++){
//             prod*= nums[r];
//             while(prod >= k && l<=r){
//                 prod/=nums[l];
//                 l++;

//             }
//             count+= r-l+1;
//         }

//         return  count;
//     }
// };
int main()
{
    // int arr[] = {10, 5, 2, 6};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int k = 100;

    // int count = 0;

    // for (int i = 0; i < n; i++)
    // {

    //     int prod = 1;
    //     for (int j = i; j < n; j++)
    //     {
    //         prod *= arr[j];
    //         if (prod < k)
    //         {
    //             count++;
    //         }
    //     }
    // }

    // cout << count << endl;

    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int n = sizeof(arr) / sizeof(arr[0]);

    // print all the subbarrays using 3 loops
    // find ther subbarray with the maximum sum and print the sum along witht the subarray
    // int maxSum = INT_MIN;
    // int start = 0, end = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;

    //     for (int j = i; j < n; j++)
    //     {
    //         sum += arr[j];

    //         if (sum > maxSum)
    //         {
    //             maxSum = sum;
    //             start = i;
    //             end = j;
    //         }
    //     }
    // }
    // cout << "Maximum sum of subarray is: " << maxSum << endl;
    // cout << "Subarray is: ";
    // for (int i = start; i <= end; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // write the code for the maximum sum of subarray using kadane's algorithm

    int maxSum = INT_MIN;
    int sum = 0;
    int maxCount = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum > maxSum)
        {
            maxSum = sum;
            count++;
        }
        if (sum < 0)
        {
            count = 0;
            sum = 0;
        }

        maxCount = max(maxCount, count);
    }
    cout << "Maximum sum of subarray is: " << maxSum << endl;
    cout << "Size of subarrays with maximum sum is: " << maxCount << endl;
}