/*
sorted and unsorted array both
i/p:{1,2,3,4,5}
o/p:4
(1,2,3)
(1,3,4)
(1,4,5)
(2,3,5)
*/


#include<bits/stdc++.h>


using namespace std;

int ispair(int arr[], int left,int right, int num)
{
    int count = 0;
    while (left < right)
    {
        if(arr[left] + arr[right] > num)
        {
            right --;
        }
        else if (arr[left] + arr[right] < num)
        {
            left ++;
        }
        else{
            count ++;
            cout << arr[left] << "," << arr[right] << "," << num <<endl;
            left ++;
            right --;
        }
    }
    return count;
}


int findTriplets(int arr[], int size)
{
    int res=0;
    sort(arr, arr+size);
    for (int i = 2; i < size; i++)
    {
        res += ispair(arr, 0, i-1, arr[i]);
    }
    return res;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << findTriplets(arr, size);
    return 0;
}