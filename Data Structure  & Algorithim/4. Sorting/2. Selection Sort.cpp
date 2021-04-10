#include<bits/stdc++.h>

using namespace std;

int SelectSort(int arr[], int size)
{
    int temp[size];
    for (int i = 0; i < size; i++)
    {
        int smallest = 0 ;
        for (int j = 1; j < size; j++)
        {
            if (arr[j] < arr[smallest])
            {
                smallest = j;
                
            }
        }
        temp[i] = arr[smallest];
        arr[smallest] = INFINITY;
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
    
}

int SelectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int smallest = i;
        for (int j = i+1; j < size; j++)
        {
            if(arr[j] < arr[smallest])
            {
                smallest = j;
            }
        }
        swap(arr[smallest], arr[i]);
    }
    
}


int main()
{
    int arr[] = {10, 5, 8,20, 2, 18};
    int size = sizeof(arr)/sizeof(arr[0]);

    SelectionSort(arr, size);

    for(int x:arr)
    {
        cout << x << " ";
    }
    return 0;
}