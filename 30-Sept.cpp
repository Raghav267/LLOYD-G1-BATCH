#include <iostream>
using namespace std;
int findingSize(string *arr)
{
    int size = sizeof(arr) / sizeof(string);
    return size;
}
bool palindrome(string s)
{
    int size = s.length();
    for (int i = 0; i < size / 2; i++)
    {
        if (s[i] != s[size - 1 - i])
            return false;
    }
    return true;
}

int countPalindromicStrings(string *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (palindrome(arr[i]))
            count++;
    }
    return count;
}

int main()
{

    // char arr[] = {'a', 'b', 'c', 'd', 'E', 's', 'u'};
    // cout << arr[9] << " We try to print the null" << endl;

    // cout << "We are printing the name of character array: " << endl;
    // cout << arr << endl;

    // string str;
    // // cin >> str;
    // getline(cin, str);
    // cout << str;

    // string str = "Ankit";
    // cout << str[0] << endl;
    // cout << str[1] << endl;
    // cout << str[4] << endl;

    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // int count = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (palindrome(arr[i]))
    //         count++;
    // }
    // cout << "The number of palindromic string s are: " << count << endl;

    // cout << "Second Function" << endl;
    // int secondCount = countPalindromicStrings(arr, n);
    // cout << "The secondCount is: " << secondCount << endl;

    // cout << "The size of the array is : " << sizeof(arr) << endl;
    // cout << "The size of the string data type is: " << sizeof(string) << endl;
    cout << "The size of my array with the help of the soize pf function: " << sizeof(arr) / sizeof(arr[0]) << endl;
    int size = findingSize(arr);
    cout << "The size calculated by the fucntion is : " << size << endl;
    return 0;
}