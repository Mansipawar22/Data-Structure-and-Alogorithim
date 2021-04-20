#include<bits/stdc++.h>

using namespace std;


/*
NaiveSolution for partition Fuction in the Quick Sort
Time Complexity O(n)
Auxilary Space O(n)
*/
int partition(int arr[], int l, int h, int p)
{
    int temp[h - l + 1];
    int index = 0;

    for (int i = l; i <= h; i++)
        if(arr[i] <= arr[p])
               temp[index++] = arr[i];
    
    for (int i = l; i < h; i++)
        if(arr[i] > arr[p])
            temp[index++] = arr[i];

    for(int i = l; i <= h; i++)
        arr[i] = temp[i];
    
}


int main()
{
    int arr[] = { 5, 13, 6, 9, 12, 11, 8 };
    int l = 0;
    int h = sizeof(arr)/sizeof(arr[0]) - 1;
    int p = sizeof(arr)/sizeof(arr[0]) - 1;
    partition(arr, l, h, p);
    for(int x:arr)
    {
        cout << x << " ";
    }
    return 0;
}