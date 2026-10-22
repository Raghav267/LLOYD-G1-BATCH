#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = -6;
    a = a << 31;
    cout << a << endl;
    cout << "The bits of a are stored like this: " << bitset<32>(a) << endl;

    int intMin = -2147483648;
    intMin--;
    cout << (intMin == INT_MAX) << endl;

    // cout << (a << 2) << endl;
}