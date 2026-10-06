#include <bits/stdc++.h>
using namespace std;

int main()
{

    // int n;
    // cout << "Enter a binary number: ";
    // cin >> n;

    // int decimalAns = 0;
    // int multiplier = 1;
    // while (n != 0)
    // {
    //     int lastDigit = n % 10;               // Last Digit of the binary number
    //     decimalAns += lastDigit * multiplier; // Add the decimal value of the last digit
    //     multiplier *= 2;                      // Update the multiplier for the next digit
    //     n /= 10;                              // Remove the last digit from the binary number
    // }
    // cout << "Decimal equivalent: " << decimalAns << endl;

    // Seconnd Method to convert binary to decimal
    // int decimalAns = 0;
    // int power = 0;
    // while (n != 0)
    // {
    //     int lastDigit = n % 10;                  // Last Digit of the binary number
    //     decimalAns += lastDigit * pow(2 , power); // Add the decimal value of the last digit using bitwise shift
    //     power++;                                 // Increment the power for the next digit
    //     n /= 10;                               // Remove the last digit from the binary number
    // }
    // cout << "Decimal equivalent: " << decimalAns << endl;

    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    int ans = 0;
    long long power = 0;
    int multiplier = 1; // Initialize the multiplier to 1 (2^0)
    while (n != 0)
    {
        int remainder = n % 2; // Get the last digit of the decimal number
        long long factor = pow(10, power);
        cout << factor << " ";
        cout << endl; // Calculate the factor for the current digit
        ans = ans + factor * remainder;
        cout << ans << " "; // Append the last digit to the binary number
        n /= 2;             // Remove the last digit from the decimal number
        // multiplier *= 10;                   // Update the multiplier for the next digit
        power++;
    }
    cout << "Binary equivalent: " << ans << endl;
    return 0;
}