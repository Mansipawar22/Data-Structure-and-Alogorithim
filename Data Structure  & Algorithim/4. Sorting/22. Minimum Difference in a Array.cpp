#include<bits/stdc++.h>

using namespace std;

//Naive Solution
//T(n) => O(n^2)
int getMinimimDifference1(int arr[], int size)
{
    int res = INFINITY;
    for (int i = 1; i < size; i++)  //O(n^2)
    {
        for(int j = 0; j < i; j++)
        {
            res = min(res, abs(arr[i]-arr[j]));
        }
    }
    return res;
}

//Efficient Solution
//My Solution
//T(n) => O(n*log(n)) + O(n) => O(n*log(n))
int getMinimimDifference2(int arr[], int size)
{
    int res = INFINITY;
    sort(arr, arr+size);                //O(n*log(n))
    for(int i = size-1; i > 0; i--)     //O(n)
    {
        res = min(res, (arr[i] - arr[i-1]));
    }
    return res;
}

int main()
{
    int arr[] = {13, 5, 8, 16, 2, 15};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << getMinimimDifference1(arr, size);
    return 0;
}