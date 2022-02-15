/*
naive solution O(n^3)
*/

#include<bits/stdc++.h>


using namespace std;

bool ispair(int arr[],int left, int right, int num1)
{
    int first = left - 1;
    bool flag = false;
    //cout << "helo";
    while (left < right)
    {
        if(arr[left] + arr[right] > num1)
        {
            right -=1;
        }
        else if(arr[left] + arr[right] < num1)
        {
            left += 1;
        }
        else{
            cout << arr[first] << ", " <<arr[left] << ", " <<arr[right] << endl; 
            left += 1;
            right -= 1;
            flag = true;
        }
    }
    return flag;
}


bool isTriplet(int arr[], int size)
{
    sort(arr, arr+size);
    for (int i = 0; i < size; i++)
    {
        ispair(arr, i+1, size-1, 0 - (arr[i]));
    }
}

int main()
{
    int arr[] = {1,-2,1,0,5};
    isTriplet(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}