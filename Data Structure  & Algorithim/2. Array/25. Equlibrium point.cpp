/*
Given an Array of Integer,
Find if it has an Equlibrium point in it.
Equlibrium point is a Index or the Point whose left side Subarray amd right side Subarray sum are equale.
I/P arr[] = {3,4,8,-9,20,6}
O/P = yes 
left side Subarray sum is 6 & right side subarray sum is 6, that why 20 is a equlibrium point.
*/


#include<iostream>

using namespace std;


//Naive Solution
//T(n)=>O(n^2)
int isEqPoint(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int r_sum = 0;
        int l_sum = 0;
        for (int j = 0; j < i; j++)
        {
            l_sum += arr[j];
        }
        for (int k = i+1; k < size; k++)
        {
            r_sum += arr[k];
        }
        if (l_sum == r_sum)
        {
            return true;
        }
    }
    return false;
}


//Efficient Solution
//T(n) => O(n)
int isEqPoint2(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i]; //Sum of array
    }
    
    int l_sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (l_sum == sum- arr[i])
        {
            return true; //if this condition is not true then
        }
        l_sum += arr[i];// we will increase l_sum
        sum -= arr[i]; //and Decrease sum
    }
    return false;
}


int main()
{
    int size;
    cout << "Enetr the size of Array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    cout << isEqPoint2(arr, size);

    return 0;
}
