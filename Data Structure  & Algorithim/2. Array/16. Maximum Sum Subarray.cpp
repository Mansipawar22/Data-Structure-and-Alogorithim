#include<iostream>


using namespace std;

//Naive Solution
//T(n) = O(n^2)
int maxSumSubarray(int arr[], int size)
{
    int res = arr[0];
    for (int i = 0; i < size; i++)
    {
        int current_sum = 0;
        for (int j = i; j < size; j++)
        {
           current_sum = current_sum + arr[j]; 
           res = max(current_sum, res);
        }
    }
    return res;
}


//Efficient Solution
//T(n)=> O(n)
//A(s)=> O(1)
//Kadence Algorithim.
int maxSumSubarray2(int arr[], int size)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for (int i = 1; i < size; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(maxEnding, res);
    }
    return res;
}

//practice
int maxSumSubarray3(int arr[], int size)
{
    int maxending = arr[0];
    int res  = arr[0];
    for (int i = 1; i < size; i++)
    {
        maxending = max(maxending + arr[i], arr[i]);
        res = max( res, maxending);
    }
    return res;

}

int main()
{
    int arr[] = {-3, -8, -2, -4, -5, 6 };


    cout << maxSumSubarray3(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}