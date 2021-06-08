#include<bits/stdc++.h>

using namespace std;

// void search_element(vector<int> arr[], int m, int n, int x)
// {
//     int top = 0;
//     int right = n-1;
//     int left = m-1;
//     for (int i = 0; i < n; i++)
//     {
//         if((x >= arr[top][0]) and (x <= arr[top][right]))
//         {
//             for (int j = i; j < n; j++)
//             {
//                 if(arr[top][j] == x)
//                 {
//                     cout << "found at :(" << top << ", " << j <<")";
//                     return;
//                 }
//             }
//         }
//         else if((x >= arr[top][0]) and (x <= arr[left][0]))
//         {
//             for (int j = i; j < m; j++)
//             {
//                 if(arr[j][top] == x)
//                 {
//                     cout << "found at :(" << j << ", " << top <<")";
//                     return;
//                 }
//             }
//         }
//         else{
//             top++;
//             //left++;
//         }
//     }
//     cout << "Not Found in the Matrix:";
// }

void search_element(vector<int> arr[], int m, int n, int x)
{
    int i = 0;
    int j = n-1;
    while(i < m and j >= 0)
    {
        if(arr[i][j]==x)
        {
            cout << "Founded at (" << i << ", " << j << ").";
            return;
        }
        else if(arr[i][j] > x)
        {
            j--;
        }
        else{
            i++;
        }
    }
    cout<< "Not Found.";
}


int main()
{
    int m, n;
    cout << "Enter Row:";
    cin >> m;
    cout << "Enter column:";
    cin >> n;
    vector<int> arr[m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp;
            cout << "(" << i << ", " << j << "):";
            cin >> temp;
            arr[i].push_back(temp);
        }
    }
    int x;
    cout << "Enter the Element to search in the MAtrix:";
    cin >> x;
    search_element(arr, m, n, x);
    
    return 0;
}