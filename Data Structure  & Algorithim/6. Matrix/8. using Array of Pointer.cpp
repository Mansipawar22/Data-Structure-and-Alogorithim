#include<bits/stdc++.h>

using namespace std;

void take(int *arr[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cout << "Enter (" << i << "," << j << ")th element:"; 
            cin >> arr[i][j];
        }
    }
}


void print(int *arr[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    } 
}


int main()
{
    int m = 3;
    int n = 3;
    int *arr[m];
    take(arr, m, n);
    print(arr, m, n);
    return 0;
}