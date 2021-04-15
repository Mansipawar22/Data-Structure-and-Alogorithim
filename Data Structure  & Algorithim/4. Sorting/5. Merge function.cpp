#include<bits/stdc++.h>


using namespace std;

int Mergefunction(int arr[], int l, int m, int h)
{
    int temp[h+1];
    int count = 0;
    int i = 0;
    int j = m+1;
    while (i<=m && j<=h && count <= h)
    {
        if(arr[i] < arr[j])
        {
            temp[count++] = arr[i++]; 
        }
        else{
            temp[count++] = arr[j++];
        }
    }

    while (i<=m && count <= h)
    {
        temp[count++] = arr[i++];
    }
    while (j<=h && count <= h)
    {
        temp[count++] = arr[j++];
    }
    for(int x =0; x<=h; x++)
    {
        arr[x] = temp[x];
    }
}


int main()
{
    int arr[] = {10,15,21,41,81,111,115,2,5};
    int l = 0;
    int h = 8;
    int m = 6;
    Mergefunction(arr, l, m, h);
    for(int x: arr)
    {
        cout << x << " ";
    }
    return 0;
}