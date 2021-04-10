#include<iostream>
#include<math.h>

using namespace std;


//T(n)=> O(n^2)
//We can Optimize this so for some cases Bubble Sort will take less than O(n^2)
int BubbleSort(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        //Optimization Code
        bool swapped = false;
        //Optimization Code
        for (int j = 0; j < size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                //Optimization Code
                swapped = true;
            }
        }
        //Optimization Code
        if (swapped = false)
            break;
    }
}


int main()
{
    int arr[] = {10, 8, 20, 5,6, 15, 21};
    int size = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, size);
    for(int x: arr)
    {
        cout << x << " ";
    }
}