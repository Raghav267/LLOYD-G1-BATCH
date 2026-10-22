#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string str, int s, int e)
{
    if (s >= e)
        return true;
    if (str[s] != str[e])
        return false;
    ;
    return checkPalindrome(str, ++s, --e);
}
int main()
{

    string str;
    cin >> str;

    cout << checkPalindrome(str, 0, str.length() - 1);

    vector<int> nums(10);

    for (int i = 0; i < 10; i++)
        cin >> nums[i];


    vector<int> arr;

    for(int  i = 0 ; i <10 ; i++){
        int temp ; cin>>temp;
        arr.push_back(temp);
    }

    // we have to right a recursion fucntion which check wether the string is palindrome or not
    return 0;
}