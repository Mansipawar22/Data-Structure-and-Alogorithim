#include<bits/stdc++.h>

using namespace std;


// Naive Solution
int CountDistinct(int arr[], int size)
{
    int res = 0;
    // bool flag;
    for (int i = 0; i < size; i++)
    {
        bool flag = false;
        for (int j = i-1; j > 0; j--)
        {
            if(arr[j] == arr[i])
            {
                flag = true;
                break;
            }
        }
        
        if(flag == false)
        {
            res++;
        }
    }
    return res;
}

// Efficient Solution
int CountDistinctHashing(int arr[], int size)
{
    unordered_set <int> s;
    for (int i = 0; i < size; i++)
    {
        s.insert(arr[i]);
    }
    for(auto x : s)
    {
        cout << x << " ";
    }
    return s.size();
}





int main()
{
    int arr[11] = { 12, 24, 56, 8, 27, 12, 1, 8, 24, 24, 27};
    int size = sizeof(arr)/sizeof(arr[0]);
    // cout << size;
    cout << CountDistinct(arr, size) << endl;
    cout << CountDistinctHashing(arr, size) << endl;
    return 0;
}