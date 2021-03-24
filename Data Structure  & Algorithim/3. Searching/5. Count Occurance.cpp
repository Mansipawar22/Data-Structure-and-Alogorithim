#include<iostream>

using namespace std;


int firstOccurance(int arr[], int size, int num)
{
    int low = 0;
    int high = size-1;
    
    while (low <= high)
    {
        int mid = (low+high)/2;
        if (arr[mid] > num)
            high = mid-1;
        if(arr[mid] < num)
        {
            low = mid + 1;
        }
        if(arr[mid]==num)
        {
            if (mid == 0 || arr[mid-1]!= arr[mid])
            {
                return mid;
            }
            else
            {
                high = mid-1;
            }
        }
    }
    return -1;
}

int lastOccurance(int arr[], int size, int num)
{
    int low = 0;
    int high = size-1;
    
    while (low <= high)
    {
        int mid = (low+high)/2;
        if (arr[mid] < num)
        {
            low = mid+1;
        }
        if (arr[mid] > num)
        {
            high = mid -1;
        }
        if(arr[mid] == num)
        {
            if(mid == size-1 || arr[mid] != arr[mid+1])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return -1;  
}


int CountOccurance(int arr[], int size, int num)
{
    int first_occr =  firstOccurance(arr, size, num);
    int last_occr = lastOccurance(arr, size, num);
    if (first_occr == -1)
    {
        return 0;
    }
    else
    {
        return (last_occr - first_occr + 1);
    }
}
 

int main()
{
    int size = 6;
    int arr[size] = {10, 20, 20, 20, 30, 30};
    int num = 20;
    cout << CountOccurance(arr, size, num);
    return 0;
}