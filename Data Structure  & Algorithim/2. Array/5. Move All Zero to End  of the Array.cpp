#include<iostream>

using namespace std;


//My Solution/ Naive Solution
int moveZero(int arr[], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<size;j++)
            {
                if(arr[j]!=0)
                {
                    int temp;
                    swap(arr[i], arr[j]);
                    break;
                }
            }
        }
    }

}

//Efficient Solution
int moveZero1(int arr[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}



int main()
{
    int arr[] = {8, 5, 0, 10, 0, 20, 0,3,7,0,5,0,0,7,0,5,0};
    moveZero1(arr, sizeof(arr)/sizeof(arr[0]));
    for(int i = 0; i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        cout <<" " << arr[i];
    }
    return 0;
}