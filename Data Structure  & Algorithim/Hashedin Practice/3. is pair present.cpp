#include<bits/stdc++.h>

using namespace std;

bool isPair(int arr[], int size, int num)
{
    bool res = false;
    int left = 0;
    int right = size-1;
    while (left < right)
    {
        if(arr[left] + arr[right] > num)
        {
            right -=1;
        }
        else if(arr[left] + arr[right] < num)
        {
            left += 1;
        }
        else{
            cout << arr[left] << " + " << arr[right] << " = " << num <<endl;
            res = true;
            left += 1;
            right -= 1;
        }
    }
    return res;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int num = 5;
    cout << isPair(arr, size, num);
    return 0;
}