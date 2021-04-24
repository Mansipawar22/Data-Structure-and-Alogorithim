#include<bits/stdc++.h>


using namespace std;

int Lamotapartition(int arr[], int low, int high)
{
    int i = low - 1;
    int pivot = arr[high];
    for(int j = low; j <= high-1; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return (i+1);
}


int Hoarepartition(int arr[], int low, int high)
{
    int i = low - 1;
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


int Quicksort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pi = Lamotapartition(arr, low, high);
        Quicksort(arr, low, pi-1);
        Quicksort(arr, pi+1, high);

    }
}

int printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}
int main()
{
    int arr[] = {9,5,6,2,7,4,8};
    int low = 0;
    int high = 6;
    printarray(arr, 8);
    Quicksort(arr, low, high);
    cout << "\n";
    printarray(arr, 8);
    return 0;
}