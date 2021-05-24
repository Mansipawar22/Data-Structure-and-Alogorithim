#include<bits/stdc++.h>

using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low-1;
    for (int  j = low; j <=high-1 ; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
    
}




int KthSmallestElement(int arr[], int size, int k)
{
    int low = 0;
    int high = size-1;
    while (low <= high)
    {
        int pi = partition(arr, low, high);
        if(pi == k-1)
        {
            return arr[pi];
        }
        else if(pi < k-1)
        {
            low = pi+1;
        }
        else{
            high = pi-1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    int size = 6;
    int k = 3;
    cout << KthSmallestElement(arr, size, k);
    return 0;
}