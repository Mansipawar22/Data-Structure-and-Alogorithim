#include<iostream>

using namespace std;


//Naive Solution
//T(n) => O(n-k)k
int MaxSumKth(int arr[], int size, int k)
{
    int max_sum = -1;
    for (int i = 0; i+k-1 < size; i++)
    {
        int sum = 0;
        for (int j = 0; j < k; j++)
        {
            sum += arr[j+i];
        }
        max_sum = max(max_sum, sum);
    }
    return max_sum;
}

//Effifcient Solution
//T(n) => O(n)
int MaxSumKth2(int arr[], int size, int k)
{
    int curr_sum = 0;
    for (int i = 0; i < k; i++)
    {
        curr_sum += arr[i];
    }
    int max_sum = curr_sum;
    for (int j = k; j < size; j++)
    {
        curr_sum += (arr[j] - arr[j-k]);
        max_sum = max(curr_sum, max_sum);
    }
    return max_sum;
}

int main()
{
    int size;
    int k;
    cout << "Enter the size of the Array: ";
    cin >> size;
    cout << "Enter the K: ";
    cin >> k;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << MaxSumKth2(arr, size, k);
    return 0;
}