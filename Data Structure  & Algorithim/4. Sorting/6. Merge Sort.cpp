#include<bits/stdc++.h>


using namespace std;

int Merge(int arr[], int l, int m, int r)
{
    int n1 = m-l+1;
    int  n2 = r-m;
    int left[n1];
    int right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[l+i];
    }
    for (int j = 0; j < n2; j++)
    {
        right[j] = arr[m+1+j];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if(left[i] < right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
       arr[k] = left[i];
       i++;
       k++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
    
    
    
}

/*int Merge(int arr[], int l, int m, int r)
{
    int temp[r+1];
    int count = 0;
    int i = 0;
    int j = m+1;
    while (i<=m && j<=r && count <= r)
    {
        if(arr[i] < arr[j])
        {
            temp[count++] = arr[i++]; 
        }
        else{
            temp[count++] = arr[j++];
        }
    }

    while (i<=m && count <= r)
    {
        temp[count++] = arr[i++];
    }
    while (j<=r && count <= r)
    {
        temp[count++] = arr[j++];
    }
    for(int x =0; x<=r; x++)
    {
        arr[x] = temp[x];
    }
}
*/

int MergeSort(int arr[], int l, int r)
{
    if(r > l)
    {
        int m = l + (r-l)/2;
        MergeSort(arr, l, m);
        MergeSort(arr, m+1, r);
        Merge(arr, l, m, r);
    }
}


int main()
{
    int arr[] = {23,12,54,12,76,24,26,93,2,15,25,82,2,25,1,6,1,9,3};
    //int arr[] = {10, 5, 30, 15, 7,25,14,36,51,62,84,69,47,65,45,48,69,12,36,52};
    int l = 0;
    int r = sizeof(arr)/sizeof(arr[0])-1;
    MergeSort(arr, l, r);
    for(int x:arr)
    {
        cout << x << " ";
    }
    return 0;
}