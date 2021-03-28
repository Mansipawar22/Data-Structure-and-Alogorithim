#include<iostream>

using namespace std;


int Search(int arr[], int size, int num)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high)/2;
        if(arr[mid] == num)
        {
            return mid;
        }
        /*
        "if we have sorted and rotaed array then there is one Guarenty that one half of the subarray will be sorted"
        Now we need to decide we should consider this half or not
        for thid we need to check whether the number is lied between this half sorted array or not
        */
        else if (arr[low] < arr[mid])
        {
            if (num >= arr[low] && num < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (num > arr[mid] && num <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid -1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 8, 9};
    int size = 7;
    int num = 9;
    cout << Search(arr, size, num);
    return 0;
}