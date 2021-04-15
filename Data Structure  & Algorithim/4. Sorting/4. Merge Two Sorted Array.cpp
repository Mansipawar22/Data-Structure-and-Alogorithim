#include<bits/stdc++.h>

using namespace std;

int MergeSort(int a[], int b[], int n, int m)
{
    int c[n+m];
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (int j = 0; j < m; j++)
    {
        c[j+n] = b[j];
    }
    sort(c, c+n+m);
    for(int x: c)
    {
        cout << x << " ";
    }
}

int main()
{
    int a[] = {10, 15, 20, 40};
    int b[] = {5, 6, 6, 10, 15, 15, 16};
    int n = 4;
    int m = 7;
    MergeSort(a, b, n, m);
    return 0;
}