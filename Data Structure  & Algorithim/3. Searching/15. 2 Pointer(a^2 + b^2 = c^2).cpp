#include<bits/stdc++.h>


using namespace std;


/*This program will check whether their is Triplet exist with given Equation
A^2 + B^2 = C^2
T(n) => O(n^2)
*/
int isPair(int arr[], int left, int right, int sum)
{
    int count = 0;
    while (left < right)
    {
        if (arr[left]*arr[left]+arr[right]*arr[right]== sum)
        {
            cout << "(" << left << ", " << right << ")" << endl;
            count++;
            left++;
        }
        else if(arr[left]*arr[left]+arr[right]*arr[right] > sum)
        {
            right--;
        }
        else{
            left++;
        }
    }
    return count;
}


int isTriplet(int arr[], int size)
{
    int res = 0;
    for (int i = 2; i < size; i++)
    {
        int x = arr[i]*arr[i];
        res += isPair(arr, 0, i-1, x);
    }
    
    return res;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << isTriplet(arr, size);
    return 0;
}