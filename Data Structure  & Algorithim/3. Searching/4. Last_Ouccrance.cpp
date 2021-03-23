#include<iostream>

using namespace std;

int lastOucc(int arr[], int low, int high, int num, int size)
{
    if(low > high)
    {
        return -1;
    }
    int mid = (low+high)/2;
    if (arr[mid] < num)
    {
        return lastOucc(arr, mid+1, high, num, size);
    }
    else if(arr[mid] > num)
    {
        return lastOucc(arr, low, mid-1, num, size);
    }
    else
    {
        if(mid == size-1 || arr[mid]!=arr[mid+1])
        {
            return mid;
        }
        else
        {
            return lastOucc(arr, mid+1, high, num, size);
        }
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int low = 0;
    int high = size-1;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int num;
    cout << "Enter number to search: ";
    cin >> num;
    cout << lastOucc(arr, low, high, num, size);
    return 0;
}