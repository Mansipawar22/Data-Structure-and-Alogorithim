#include<iostream>

using namespace std;


//Naive Solution
int RemoveDuplicates1(int arr[], int size)
{
    int temp[size];
    temp[0] = arr[0];
    int res = 1;
    for(int i = 1; i < size; i++)
    {
        if(temp[res-1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }
    for(int i=0;i<res;i++)
    {
        arr[i] = temp[i];
    }

    for(int i=0;i<res;i++)
    {
        cout<<temp[i] << " ";
    }
    //We don't care what element we have after the result index.
    return res;
}

//Efficient Solution
int RemoveDuplicates2(int arr[], int size)
{
    int res = 1;
    for(int i = 1;i<size;i++)
    {
        if(arr[res-1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}


int main()
{
    int arr[] = {10, 20, 20, 30, 30, 30,40,40,40, 50,50};
    cout << RemoveDuplicates2(arr, sizeof(arr)/sizeof(arr[0])) << endl;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        cout<<arr[i] << " ";
    }
    return 0;
}
