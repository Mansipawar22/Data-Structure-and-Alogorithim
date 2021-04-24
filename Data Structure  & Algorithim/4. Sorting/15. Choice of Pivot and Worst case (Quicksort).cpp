#include<bits/stdc++.h>


using namespace std;

int partition(int arr[], int low, int high)
{
    int i = low-1;
    int j = high+1;
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

int partition_r(int arr[], int low, int high)
{
    srand(time(NULL));
    int random =  low + rand()%(high-low);
    swap(arr[high], arr[random]);
    return partition(arr, low, high);
}

int qSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pi  = partition_r(arr, low, high);
        qSort(arr, low, pi);
        qSort(arr, pi+1, high);    }
}


int main()
{
    int arr[] = {10, 5, 8, 20, 2, 18};
    int low = 0;
    int high = 6;
    qSort(arr, low, high);
    for(int i = 0; i <= 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}