#include<iostream>

using namespace std;


int CheckSubarrayGivenSum(int arr[], int size, int sum)
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
    cout << CheckSubarrayGivenSum(arr, size, sum);
    return 0;
}