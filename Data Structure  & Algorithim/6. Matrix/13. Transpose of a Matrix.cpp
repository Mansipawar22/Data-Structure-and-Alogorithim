#include<bits/stdc++.h>


using namespace std;

void Transpose_of_matrix(vector<int> arr[], int m, int n)
{
    for (int i = 0; i < m-1; i++)
    {
        
        for (int j = i+1; j < n; j++)
        {
            int temp;
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
            //cout << arr[i][j] << " ";
        }
        // cout << endl;
    } 
}

void print(vector<int> arr[], int m, int n)
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
    int m = 2;
    int n = 2;
    vector<int> arr[m];
    int counter = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter:" << i << " :";
            cin >> counter;
            arr[i].push_back(counter);
        }  
    }
    Transpose_of_matrix(arr, m, n);
    print(arr, m, n);
    return 0;
}