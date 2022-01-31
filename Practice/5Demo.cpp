#include<bits/stdc++.h>


using namespace std;

int MoveAllZero(int arr[], int size)
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
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    // int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    MoveAllZero(arr, size);
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}