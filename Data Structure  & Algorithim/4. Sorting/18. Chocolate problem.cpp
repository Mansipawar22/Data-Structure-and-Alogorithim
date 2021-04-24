#include<bits/stdc++.h>

using namespace std;

int min_Difference(int arr[], int size, int m)
{
    if(m > size)
        return -1;

    sort(arr, arr+size);
    int res = arr[m-1] - arr[0];

    for (int i = 1; (i+m-1) < size; i++)
    {
        res = min(res, arr[i+m-1]-arr[i]);
    }
    return res;
}

int main()
{
    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};
    cout << min_Difference(arr, 8, 5);

    return 0;
}