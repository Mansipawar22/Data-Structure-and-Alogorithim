#include<iostream>

using namespace std;

//Naive Solution
//T(n)=>Theta(n^2)
int WaterStored(int arr[], int size)
{
    int res = 0;
    for (int i = 1; i < size-1; i++)
    {
        int Lmax = arr[i];
        for (int j = 0; j < i; j++)
        {
             Lmax = max(Lmax, arr[j]);
        }
        int Rmax = arr[i];
        for (int j = i+1; j < size; j++)
        {
             Rmax = max(Rmax, arr[j]);
        }
        res = res + (min(Lmax,Rmax)-arr[i]);
    }
    return res;
}


//Efficient Solution
//T(n)=>Theta(n)
//A(s)=>Theta(n)
int WaterStored1(int arr[], int size)
{
    int water = 0;
    int lmax[size], rmax[size];
    lmax[0] = arr[0];
    for (int i = 1; i < size; i++)
    {
        lmax[i] = max(lmax[i-1], arr[i]);
    }
    rmax[0] = arr[size-1];
    for (int i = size-2; i >= 0; i--)
    {
        rmax[i] = max(rmax[size+1], arr[i]);
    }
    for (int i = 1; i < size; i++)
    {
        water = water + (min(lmax[i],rmax[i])-arr[i]);
    }
    return water;
}

int main()
{
    int arr[] = {3,5,2,3};
    cout << WaterStored1(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}