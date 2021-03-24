#include<iostream>

using namespace std;

//Naive Solution
//In Naive Solution we can Simply iterate through
//every element can compare to num
//if arr[i] == num return i
//T(n)=> O(n) and Auxilary space =>O(1)
int firstOuccurance(int arr[], int size, int num)
{
    int res = -1;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == num)
        {
            res = i;
            return res;
        }
    }
    return res;
}

//Efficient Solution
//with O(log(n)) time complexity
//and Auxilary space O(log(n))
int firstOuccrance2(int arr[], int low, int high, int num)
{
    int mid = (low+high)/2;
    if (low > high)
    {
        return -1;
    }
    if (arr[mid] < num)
    {
        return firstOuccrance2(arr, mid+1, high, num);
    }
    if (arr[mid] > num)
    {
        return firstOuccrance2(arr, low, mid-1, num);
    }
    if (arr[mid] == num)
    {
        if (mid == 0 || arr[mid-1]!= arr[mid])
        {
            return mid;
        }
        else
        {
            return firstOuccrance2(arr, low, mid-1, num);
        }
        
    }
    return -1;
}

//Iteration approuch
//TimeComplexity O(log(n))
//but it will required only 
//Auxilary space O(1)
int firstOuccrance3(int arr[], int size, int num)
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

int main()
{
    int size;
    cout <<"Enter a number: ";
    cin >> size;
    int arr[size];
    int low = 0;
    int high = size-1;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int num;
    cout <<"Enter a number to Search: ";
    cin >> num;
    cout << firstOuccrance3(arr, size, num);
    return 0;
}