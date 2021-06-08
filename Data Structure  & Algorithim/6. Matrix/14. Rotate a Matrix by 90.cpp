#include<bits/stdc++.h>


using namespace std;

void print(vector<int> arr[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void Rotate_90(vector<int> arr[], int m, int n)
{
    int temp[m][n];
    for(int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[n-j-1][i] = arr[i][j];
        }
    }
    for(int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = temp[i][j];
        }
    }
}


void Rotate_90_efficient(vector<int> arr[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            swap(arr[j][i], arr[i][j]);
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        int low = 0;
        int high = n-1;
        while (low < high)
        {
            swap(arr[low][i],arr[high][i]);
            low++;
            high--;
        }
        
    }
    
}

int main()
{
    int m;
    int n;
    cout << "Enter Row number:";
    cin >> m;
    cout << "Enter Column number:";
    cin >> n;
    vector<int> arr[m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            arr[i].push_back(temp);
        }
    }
    cout << "Actual Matrix Before the Rotation by 90 degree:\n";
    print(arr, m, n);
    Rotate_90(arr, m, n);
    cout << "Rotated Matrix by Nive Solution:\n";
    print(arr, m, n);
    Rotate_90_efficient(arr, m, n);
    cout << "Rotated Matrix by Efficient Solution:\n";
    print(arr, m, n);
    Rotate_90_efficient(arr, m, n);
    cout << "Rotated Matrix by Efficient Solution:\n";
    print(arr, m, n);
    Rotate_90_efficient(arr, m, n);
    cout << "Rotated Matrix by Efficient Solution:\n";
    print(arr, m, n);
    return 0;
}