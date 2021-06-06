#include<bits/stdc++.h>

using namespace std;

void print(int **arr, int m, int n)
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

// if you want to get input from the user

void take(int **arr, int m, int n)
{
    //arr = new int *[m];
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

int main()
{
    int m = 3;
    int n = 3;
    int **arr;
    arr = new int *[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        { 
            arr[i][j] = arr[i][j];
        }
    }
    print(arr, m, n);
    take(arr, m, n);
    print(arr, m, n);
    return 0;
}