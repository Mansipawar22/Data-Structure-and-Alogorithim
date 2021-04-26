#include<bits/stdc++.h>

using namespace std;

int merge(int arr1[], int arr2[], int n, int m)
{
    int i = 0;
    int j = 0;
    int k = n-1;
    while (i <= k and j < n)
    {
        if(arr1[i] <= arr2[j])
        {
            i++;
        }
        else{
            swap(arr1[k], arr2[j]);
            j++;
            k--;
        }
    }
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);
}

int kth_element_of_sorted_array(int arr1[], int arr2[], int n, int m,int k)
{
    if(k > n+m )
    {
        return -1;
    }
    merge(arr1, arr2, n, m);
    if(k <= n)
    {
        return arr1[k-1];
    }
    else{
        return arr2[k-n-1];
    }

}


int main()
{
    int arr1[] = { 2, 4, 6, 8, 12, 15, 17 };
    int arr2[] = { 1, 4, 7, 16, 18};
    int n = 7;
    int m = 5;
    int k = 5;
    cout << kth_element_of_sorted_array(arr1, arr2, n, m, k);
    return 0;
}

