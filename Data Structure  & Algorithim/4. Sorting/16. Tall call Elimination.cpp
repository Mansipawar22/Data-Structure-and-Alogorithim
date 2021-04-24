#include<bits/stdc++.h>

using namespace std;

int hoare_partition(int arr[], int low, int high)
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
            return j;

        swap(arr[i], arr[j]);
    }
    
}

int partition_random(int arr[], int low, int high)
{
    srand(time(NULL));
    int random = low + rand()%(high-low);
    swap(arr[high], arr[random]);
    return hoare_partition(arr, low, high);
}

int qSort(int arr[], int low, int high)
{
    Begin:
        if(low < high)
        {
            int pi = partition_random(arr, low, high);
            qSort(arr, low, pi);
            low = pi+1; //reinitilise l with pi+1 for recursion call of qSort This is call Tall Call Elimination
            goto Begin; //it will optimize the tail recusion call and decrease the space required.
        }
}


int main()
{
    int arr[] = {8,2,4,5,2,5,1,8,5,3};
    int low = 0;
    int high = 9;
    qSort(arr, low, high);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}