#include<iostream>

using namespace std;

//My Solution + Naive Solution
//T(n) => O(n^2)
//A(s) => O(1)
int MaxDifference(int arr[], int size)
{
    int res = arr[1] - arr[0]; // we can also write res = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (res < (arr[j]-arr[i])) // Then we have to check for that condition too " if (res<(arr[j]-arr[i])||(res==0))"
            {
                res = (arr[j]-arr[i]);
            }
        }
    }
    cout << res ;   
}

int MaxDifference2(int arr[], int size)
{
    int minval = arr[0];
    int res = arr[1]-arr[0];
    for (int i = 1; i < size; i++)
    {
        res = max(res, arr[i]- minval);
        minval = min(minval, arr[i]);
    }
   return res;
}

int main()
{
    int arr[] = {30,10,8,2};
    cout << MaxDifference2(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}