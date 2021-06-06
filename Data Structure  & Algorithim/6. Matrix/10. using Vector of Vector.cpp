#include<bits/stdc++.h>

using namespace std;

void print(vector<vector<int>> &arr, int m, int n)
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


void take(vector<vector<int>> &arr, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        vector<int> v;
        for(int j = 0; j < n; j++)
        {
             int temp;
            cout << "Enter (" << i << "," << j << ")th element:"; 
            cin >> temp;
            v.push_back(temp);
        }
        arr.push_back(v);
    }
    
}


int main()
{
    int m = 3;
    int n = 3;
    vector<vector<int>> arr;
    take(arr, m, n);
    print(arr, m, n);
    return 0;
}
