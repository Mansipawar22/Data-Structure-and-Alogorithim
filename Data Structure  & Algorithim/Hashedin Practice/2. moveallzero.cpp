/*
i/p: {1,2,0,4,3,0,5,0}
o/p: {1,2,4,3,5,0,0,0}
*/


#include<bits/stdc++.h>


using namespace std;

int moveAllZero(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count += 1;
        }
    }
}

int main()
{
    int arr[] = {1,2,0,4,3,0,5,0};
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
    moveAllZero(arr, sizeof(arr)/sizeof(arr[0]));
    cout << endl;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}