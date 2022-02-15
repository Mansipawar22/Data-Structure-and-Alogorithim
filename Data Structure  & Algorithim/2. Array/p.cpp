#include<bits/stdc++.h>

using namespace std;


// int largest(int arr[], int size)
// {
//     int res = 0;
//     for (int i = 1; i < size; i++)
//     {
//         if(arr[i] > arr[res])
//         {
//             res = i;
//         }
//     }
//     return res;
// }


// int secondLargest(int arr[], int size)
// {
//     int res = -1;
//     int largest = 0;
//     for (int i = 1; i <= size; i++)
//     {
//         if(arr[i] > arr[largest])
//         {
//             res = largest;
//             largest = i;
//         }
//         else if(arr[i] != arr[largest])
//         {
//             if((res == -1) or (arr[i] > arr[res]))
//             {
//                 res = i;
//             }
//         }
//     }
//     return res;
// }


int reverse(int arr[], int size)
{
    int l = 0;
    int r = size -1;
    while (l < r)
    {
        swap(arr[l], arr[r]);
        /* code */
        l++;
        r--;
    }
    
    
}


int main()
{
    // int arr[10] = {15,36,82,54,175,29,75,136,85,99};
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverse(arr, size);
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}