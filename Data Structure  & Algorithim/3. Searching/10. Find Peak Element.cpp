#include<iostream>

using namespace std;


//Naive Solution
//T(n)=> O(n)
int Findpeak(int arr[], int size)
{
    /*
    Note: if we want to print all the peak element then we have to use
    "cout" otherwise if we want to print only one peak element then we have to use "return"
    in blow code we are printing all the peak element.
    */
    if(size == 1)
        return arr[0];

    if(arr[0]>=arr[1])
        return arr[0];

    if(arr[size-1] >= arr[size-2])
        return arr[size-1];

    for (int i = 1; i < size-1; i++)
    {
        if (arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
        {
           return arr[i];
        }        
    }

    return -1;
    
}


//Efficient Solution
//T(n) => O(log(n))
int getAPeak(int arr[], int size)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high)/2;
        if(( mid == 0 || arr[mid-1] <= arr[mid] ) && ( mid == size-1 || arr[mid] >= arr[mid+1] ))
        {
            return mid;
        }
        if(mid > 0 && arr[mid-1] >= arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    //cout << "Hello World" << endl;
    int arr[] = {10, 20, 4, 5, 23, 90, 67};
    int size = 7;
    cout << Findpeak(arr, size) << endl;
    int peak = getAPeak(arr, size);
    cout << arr[peak] << endl;
    return 0;
}