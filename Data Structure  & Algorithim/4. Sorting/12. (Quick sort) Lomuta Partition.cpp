#include<bits/stdc++.h>

using namespace std;

int Partition(int arr[], int low, int high)
{
    int i = (low-1); // Smallest Element
    int pivot = arr[high]; // Pivot Elemet
    for(int j = low; j <= high-1; j++)
    {
        // If current element is smaller than or
		// equal to pivot
        if(arr[j] < pivot)
        {
            i++; //Increamenting i
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
}


int main()
{
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int low = 0;
    int high = 6;
    Partition(arr, low, high);
    for(int x: arr)
    {
        cout << x << " ";
    }
    return 0;
}