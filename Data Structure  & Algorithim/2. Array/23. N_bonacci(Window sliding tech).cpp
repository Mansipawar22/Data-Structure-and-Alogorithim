#include<iostream>

using namespace std;


//Totally Done by me(My Solution).
//Time Colexity O(m), where m is the Size of the array.
//Based on Window Sliding Techniqe
//
int N_bonacci(int arr[],int size, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == n-1)
        {
            arr[i] = 1;
        }
        else{
            arr[i] = 0;
            
        }
    }
    int curr_sum = arr[n-1];
    int start = 0;
    for (int j = n; j < size; j++)
    {
        if(j < size)
        {
            arr[j] = curr_sum;
        }
        if(start < (size-n))
        {
            curr_sum -= arr[start];
            start++;
        }
        curr_sum += arr[j];
    }
    for(int k = 0; k<size ; k++)
    {
        cout << arr[k] << " ";
    }
}


int main()
{
    int size;
    int n;
    cout << "Enter the Size: ";
    cin >> size;
    int arr[size];
    cout << "Enter the term's n: ";
    cin >> n;
    N_bonacci(arr, size, n);
    return 0;
}