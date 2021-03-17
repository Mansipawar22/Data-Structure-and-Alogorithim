/*
Given an fixed array and multiple queries
of the following type on the array.
How to efficienlty perform the Queries

I/P => arr[] ={1,3,5,7,2,8,4,7,2,4};
getsum(2, 5);
O/P => 22
sum of subarray from index 2 to 5
*/


#include<iostream>

using namespace std;

//Efficient Solution
//T(n) => O(1)
//A(s) => O(n);
int GetSum(int Prefixarray[], int l, int r)
{
    int sum = 0;
    if (l!=0)
    {
        sum  = Prefixarray[r] - Prefixarray[l-1];
    }
    else{
        sum = Prefixarray[r];
    }
    return sum;
}

int main()
{
    int size,l,r;
    cout << "Enter the Size of the Array: ";
    cin >> size;
    cout << "Enter left index:";
    cin >> l;
    cout << "Enter right index: ";
    cin >> r;
    cout << endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "array " << i+1 << " element: ";
        cin >> arr[i];
    }
    cout << endl;
    cout << "Current Array Elements: \n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    int Prefixarray[size];
    Prefixarray[0] = arr[0];
    for (int i = 1; i < size; i++)
    {
         Prefixarray[i] = arr[i] + Prefixarray[i-1];
    }
    cout << "Prefix Sum Array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << Prefixarray[i] << " ";
    }
    cout << endl;
    cout << GetSum(Prefixarray, l, r);
    return 0;
}