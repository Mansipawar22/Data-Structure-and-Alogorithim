#include<iostream>


using namespace std;

//My Solution
int ReverveArray(int arr[], int size)
{
    int temp = size/2;
    for(int i = 0; i < temp; i++)
    {
        if(size == temp)
            break;
        
        swap(arr[i], arr[size-1]);
        size--;
    }
}

//NaVie Solution
int ReverseArrayNaive(int arr[], int n)
{
    int left = 0;
    int right = n-1;
    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }  
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 9};
    ReverseArrayNaive(arr, sizeof(arr)/sizeof(arr[0]));
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}