#include<bits/stdc++.h>


using namespace std;
int MoveAllZero(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if( arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}




int main()
{
    int arr[] = {1,4,7,0,2,0,0,4,0,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    MoveAllZero(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}