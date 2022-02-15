// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

int isPair(int arr[], int size)
{
    sort(arr, arr + size);
    int left = 0;
    int right = size - 1;
    int count = 0;
    while (left < right)
    {
        if (arr[left] + arr[right] == 0)
        {
            count++;
            left++;
            //right--;
            //return true;
            //use this code if you want only check that is ther any pair
        }
        else if (arr[left] + arr[right] > 0)
        {
            right--;
        }
        else{
            left++;
        }
    }
    //cout << count;
    return count;
}


int main()
{
    int arr[] = {0, -1, 2, -3, 1};
    int size = 5;
    cout << isPair(arr, size);
    return 0;
}