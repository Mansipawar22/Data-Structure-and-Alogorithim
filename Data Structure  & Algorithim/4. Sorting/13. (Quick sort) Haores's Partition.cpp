#include<bits/stdc++.h>

using namespace std;

int Partition(int arr[], int low, int high)
{
    int i = low -1;
    int j = high + 1;
    int pivot = arr[low];
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        
        if(i >= j)
        {
            return j;
        }
        swap(arr[i], arr[j]);
    }
}

void PrintArray(int arr[], int high)
{
    for(int x = 0; x <= high; x++)
    {
        cout << arr[x] << " ";
    }
}


int main()
{
    int arr[] = {5,3,8,4,2,7,1,10};
    int low = 0;
    int high = 7;


    Partition(arr, low, high);

    PrintArray(arr, high);

    return 0;
}