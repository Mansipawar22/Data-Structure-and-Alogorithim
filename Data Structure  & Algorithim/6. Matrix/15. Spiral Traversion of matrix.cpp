#include<bits/stdc++.h>

using namespace std;

void print_spiral(vector<int> arr[], int m, int n)
{
    int top = 0, bottom = m-1;
    int left = 0, right = n-1;
    while((top <= bottom) and (left <= right))
    {
        // Top Row Traversion 
        for (int i = left; i <= right; i++)
        {
            cout << arr[top][i] << " ";
        }
        top++;

        // Right Column Traversion
        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right] << " ";
        }
        right--;

        // Bottom row Traversion(Reverse)
        if(top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }

        // Left column Traversion(Reverse)
        if(left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}



int main()
{
    int m = 4;
    int n = 4;
    vector<int> arr[m];
    int counter = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            counter += 1;
            arr[i].push_back(counter);
        }
        
    }
    print_spiral(arr, m, n);
    return 0;
}