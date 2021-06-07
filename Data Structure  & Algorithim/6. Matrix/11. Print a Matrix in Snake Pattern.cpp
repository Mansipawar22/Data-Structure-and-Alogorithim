#include<bits/stdc++.h>

using namespace std;

void print(vector<int> arr[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        if(i%2==0){
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else{
            for (int j = n-1; j >= 0; j--)
        {
            cout << arr[i][j] << " ";
        }
        }
    } 
}

void take(vector<int> arr[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        //arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            int temp;
            cout << "Enter (" << i << "," << j << ")th element:"; 
            cin >> temp;
            arr[i].push_back(temp);
        }
    }
}


int main()
{
    int m = 4;
    int n = 4;
    vector<int> arr[m];
    int counter = 0;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         counter += 1;
    //         arr[i].push_back(counter);
    //     }
        
    // }
    take(arr, m, n);
    print(arr, m, n);
    return 0;
}