#include <iostream>
using namespace std;
int main()
{
    // int a;
    // int *ptr = &a;
    // cout << ptr << endl;

    // char ch = 'A';
    // char *ptrCh = &ch;

    // cout << "The Value stored in the pointer ptrCh is : " << *ptrCh << endl;

    // double var = 10.55;

    // cout << *&var << endl;

    // long var = 100;

    cout<<"False";


    
    cout<<"Fasle";

    // long *ptrToVar = &var;

    // long **ptrToptr = &ptrToVar;

    // cout << ptrToVar << endl;

    // cout << ptrToptr;

    // cout << "We are derefrencing the ptrTo ptr: " << **ptrToptr << endl;

    // int a = 10;
    // int *abc = &a;
    // cout << abc << endl;
    // a++;
    // cout << abc << endl;
    // abc = &a;
    // cout << abc;

    int a = 10;
    cout << a << endl;
    int *ptr = &a;

    cout << ptr << endl;

    ptr = ptr + 1;

    a = *ptr;

    cout << a << endl;

    cout << ptr << endl;

    return 0;
}