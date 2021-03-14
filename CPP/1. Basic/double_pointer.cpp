#include<iostream>

using namespace std;

int main()
{
    int var = 10;
    int *ptr1;
    int **ptr2;
    cout << "Actual variable value: " << var << endl;
    ptr1 = &var;
    *ptr1 = 20;
    cout << "Value through Pointer one: " << *ptr1 << " " << ptr1 << endl;
    ptr2 = &ptr1;
    **ptr2 = 30;
    cout << "Value through Pointer two: " << **ptr2 << " " << ptr2 << endl;
    return 0;
}