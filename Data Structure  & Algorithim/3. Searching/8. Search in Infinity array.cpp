#include<iostream>

using namespace std;

//Searching the element in the array
int Search(int arr[], int low, int high, int num)
{
    while (low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid] == num)
            return mid;
        else if (arr[mid] < num)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return -1;
}

//Finding the high bound in the array to fing the element
int FindHigh(int arr[], int num)
{
    if(arr[0]== num)
    {
        return 0;
    }
    int i = 1;
    while (arr[i] < num)    //if arr[i] is smaller than num then we will
    {
        i = i* 2;         //update i 
        if(arr[i] == num)
        {
            return i;
        }
    }
    return Search(arr, i/2+1, i-1, num); // i/2+1 to i-1 binary search cuz we already search for all element till i/2 and we already chech for i.
}



int main()
{
    int arr[] = {10, 12, 13, 14, 17,19,20,23,26,29,30,37,39,41,43,48,49,61,67,69,70};
    int num = 22;
    cout << FindHigh(arr, num);
    return 0;
}