#include <iostream>
using namespace std;

void functionForName(int n)
{
    for (int i = 0; i < n; i++)
        cout << "Harsh ";
}

int main()
{
    // OOur number is always greater than 2;

    // int n;
    // cout << "Enter a number: ";
    // cin >> n;

    // bool flag = false;

    // for (int i = 2; i * i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         flag = true;
    //         break;
    //     }
    // }

    // if (flag)
    // {
    //     cout << "Not Prime";
    // }
    // else
    // {
    //     cout << "Prime";
    // }

    // int n;
    // cout << "Enter the number which you want to check: ";
    // cin >> n;
    // int m;
    // cout << "Enter the number from which you want to divide: ";
    // cin >> m;

    // int firstValue, secondValue;

    // for (int i = n; i > n - m; i--)
    // {
    //     if (i % m == 0)
    //     {
    //         // cout << "The number which is divisible by " << m << " is: " << i << endl;
    //         firstValue = i;
    //         break;
    //     }
    // }

    // for (int i = n; i < n + m; i++)
    // {
    //     if (i % m == 0)
    //     {
    //         // cout << "The number which isndivisble by m is: " << i << endl;
    //         secondValue = i;
    //     }
    // }

    // if ((n - firstValue) < (secondValue - n))
    //     cout << firstValue;
    // else if ((n - firstValue) > (secondValue - n))
    //     cout << secondValue;
    // else if (abs(firstValue) < abs(secondValue))
    //     cout << secondValue;
    // else
    //     cout << firstValue;

    double n;
    cout << "Enter the number of times you want to print your name: ";
    cin >> n;

    functionForName(n);
    cout << endl;
    // functionForName();

    return 0;
}