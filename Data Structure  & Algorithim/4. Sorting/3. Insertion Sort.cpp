#include<bits/stdc++.h>


using namespace std;

int InsertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i-1;
        while (j>=0 && key < arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    
}


int main()
{
    int arr[] = {100, 90, 80, 70,45,63,53,26,25,85,25,63,14,9,4,3,5,25,57,45,98,97,62,95,12,125,365,24,100,200,154,300,325,12,412,4215,2512,5,1547,15,154,5124,51,2,1,1,48,1,8,1,0,46, 60, 50, 40, 30, 20, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr, size);
    for(int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}