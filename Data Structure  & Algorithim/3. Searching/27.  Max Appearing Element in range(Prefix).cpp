#include<bits/stdc++.h>
#define MAX 10000

using namespace std;

int MaxOcr(int L[], int R[], int size)
{
    int arr[MAX];
    memset(arr, 0, sizeof arr);
    int maxi = -1;
    for (int i = 0; i < size; i++)
    {
        arr[L[i]]++;
        arr[R[i]+1]--;
    }
    
    int maxm = arr[0];
    int res = 0;
    for (int i = 0; i < 1000; i++)
    {
        arr[i] += arr[i-1];
        if (arr[i] > maxm)
        {
            maxm = arr[i];
            res = i;
        }
    }
    return res;
}

int main()
{
    int size = 4;
    int L[] = {1, 2, 5, 15};
    int R[] = {5, 8, 7, 18};
    cout << MaxOcr(L, R, size);
    return 0;
}