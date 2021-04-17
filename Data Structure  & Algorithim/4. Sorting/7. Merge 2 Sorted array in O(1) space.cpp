#include<bits/stdc++.h>

using namespace std;

int Merge_without_extraspace(int arr1[], int arr2[], int n, int m)
{
    int i = 0;
    int j = 0;
    int k = n-1;
    while (i <= k and j < m)
    {
        if(arr1[i] < arr2[j])
        {
            i++;
        }
        else{
            swap(arr1[k--], arr2[j++]);
        }
    }
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);
}

int main()
{
    int arr1[] = {2,4,6,8,9,13,15,17,18,48,57,78,89,90};
    int arr2[] = {1,3,5,7,9,24,37,58,69,80,99};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    Merge_without_extraspace(arr1, arr2, n, m);
    for(int n1:arr1)
        cout << n1 << " ";
    cout << endl;
    for(int n2:arr2)
        cout << n2 << " ";
    return 0;
}