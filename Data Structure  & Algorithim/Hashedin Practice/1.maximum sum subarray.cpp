#include<bits/stdc++.h>


using namespace std;


int maxSumSubarray(int arr[], int size)
{
    int maxend = arr[0];
    int res = arr[0];
    for (int i = 1; i < size; i++)
    {
        maxend = max(maxend + arr[i], arr[i]);
        res = max(maxend, res);
    }
    return res;
}


int main()
{
    int arr[] = {-3, 8, -2, -4, -5, 6 };
    cout << maxSumSubarray(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}