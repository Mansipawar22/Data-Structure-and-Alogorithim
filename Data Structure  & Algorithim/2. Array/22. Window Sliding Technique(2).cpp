#include<iostream>

using namespace std;

//Naive Solution
int CheckSubarrayGivenSum1(int arr[], int size, int sum)
{
    for (int i = 0; i < size; i++)
    {
        int curr_sum = 0;
        for (int j = i; j < sum; j++)
        {
            curr_sum += arr[j];
            if (curr_sum == sum)
                return true;
        }
    }
    return false;
}

//Efficient solution
int CheckSubarrayGivenSum2(int arr[], int size, int sum)
{
    int curr_sum = arr[0];
    int starting = 0;
    for (int ending = 1; ending < size; ending++)
    {
        while ((curr_sum > sum) && (starting < ending-1))
        {
            curr_sum -= arr[starting];
            starting++;
        }
        if (curr_sum == sum)
        {
            return true;
        }
        if (ending < size)
        {
            curr_sum += arr[ending];
        }
    }
    return (curr_sum == sum);
}

int main()
{
    int size;
    int sum;
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter Sum to check in the Array: ";
    cin >> sum; 
    //cout << "Enter the Kth consequted"
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << CheckSubarrayGivenSum2(arr, size, sum);
    return 0;
}