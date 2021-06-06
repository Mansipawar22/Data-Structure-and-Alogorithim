#include<bits/stdc++.h>

using namespace std;

int main()
{
    // Variable sized Matrix
    int m = 3;
    int n = 2;
    int arr[m][n] = {
            {1, 2},
            {4, 5},
            {7, 8}
        };
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;            
        }
        
    return 0;
}