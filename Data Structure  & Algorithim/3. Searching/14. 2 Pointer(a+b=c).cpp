#include<bits/stdc++.h>

using namespace std;



int isPair(int arr[], int left, int right, int sum)
{
    int count = 0;
    while (left < right)
    {
        if (arr[left]+arr[right] == sum)
        {
            count++;
            left++;
        }
        else if(arr[left]+arr[right] > sum)
        {
            right--;
        }
        else{
            left++;
        }
    }
    return count;
}

int isEquationPresent(int arr[], int size)
{
    int res = 0;
    for (int i = 2; i < size; i++)
    {
        res += isPair(arr, 0, i-1, arr[i]);
    }
    return res;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    cout << isEquationPresent(arr, size);
    return 0;
}