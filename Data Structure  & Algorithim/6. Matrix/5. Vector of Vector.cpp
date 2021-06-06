#include<bits/stdc++.h>


using namespace std;

int main()
{
    int m = 3;
    int n = 2;
    vector <vector<int>> arr;
    for (int i = 0; i < m; i++)
    {
        vector <int> v;
        for (int j = 0; j < n; j++)
        {
            v.push_back(j+1);
        }
        arr.push_back(v);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j]  << " ";
        }
        cout << endl;
    }
    
    return 0;
}