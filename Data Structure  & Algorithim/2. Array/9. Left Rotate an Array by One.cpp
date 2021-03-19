#include<iostream>

using namespace std;



//My Solution
int RotateLeftOne(int arr[], int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        if(i == 0)
        {
            temp = arr[i];
            arr[i] = arr[i+1];
        }
        if(i == (size-1))
        {
            arr[i] = temp;
        }
        else
        {
            arr[i] = arr[i+1];
        }
    }
}



int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    RotateLeftOne(arr, sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}