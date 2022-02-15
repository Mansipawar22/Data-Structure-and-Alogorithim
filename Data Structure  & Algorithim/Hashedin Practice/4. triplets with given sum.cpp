/*
negative and positive both are allowed;
*/

#include<bits/stdc++.h>

using namespace std;

bool ispair(int arr[],int left, int right, int num1)
{
    int first = left -1;
    // bool flag = false;
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
            return true;
        }
    }
    return false;
}

int isTriplets(int arr[], int size, int num)
{
    bool res = false;
    for (int i = 0; i < size; i++)
    {
        ispair(arr, i+1, size-1, num - arr[i]);
    }

}

int main()
{
    int arr[] = {1,2,3,4,5};
    int num  = 10;
    isTriplets(arr, 5, num);
    return 0;
}