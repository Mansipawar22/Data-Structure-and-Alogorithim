/*
Naive solution O(n^2)
*/

#include<bits/stdc++.h>


using namespace std;

// int ispairpresent(int arr[], int size, int k)
// {
//     int count = 0;
//     int left = 0;
//     int right = size-1;
//     while(left < right)
//     {
//         if(arr[right] - arr[left] == k)
//         {
//             count += 1;
//             cout << arr[left] << "," <<arr[right] << endl;
//             left += 1;
//             right -= 1;
//         }
//         else if(arr[right] - arr[left] > k)
//         {
//             right --;
//         }
//         else{
//             left ++;
//         }
//     }
// }

int findPair(int arr[], int size, int k)
{
    int i = 0;
    int j = 1;
    int count = 0;
    while(i < size && j < size)
    {
        if( i != j && arr[j] - arr[i] == k)
        {
            cout << "pair found :" << arr[i] << "," << arr[j] <<endl;
            count ++;
            i ++;
            j ++; 
        }
        else if(arr[j] - arr[i] > k)
        {
            i++;
        }
        else{
            j++;
        }
    }
    return count;
}


int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    findPair(arr, size, k);
    return 0;
}