#include<iostream>
#include<unordered_set>
#include<algorithm>

using namespace std;


// Naive solution
// T(n) = O(nlon(n)) for sorting + O(n) for searching.
// space = O(1)
int findLongestConsecutive(int arr[], int size)
{
    sort(arr, arr + size);
    int res = 1; 
    int cur =  1;
    for (int i = 1; i < size; i++)
    {
        if(arr[i] == arr[i-1]+1)
        {
            cur += 1;
        }
        else{
            res = max(res, cur);
        }
    }
    res = max(res, cur); //corner case when the entire array is consecutove subsequence.
    return res;
}

// Efficient solution
// T(n) = O(n);
//space = O(n);
int findLongestConsecutiveSubseq(int arr[], int size)
{
    unordered_set<int> s;
    int res = 0;
    for (int i = 0; i < size; i++)
    {
        s.insert(arr[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        if (s.find(arr[i]-1) == s.end())
        {
            int cur = 1;
            while (s.find(arr[i]+cur) != s.end())
            {
                cur += 1;
            }
            res = max(res, cur);
        }
    }
    return res;
}

int main()
{
    int arr[] = {1,9,3,4,2,20,5,21,22,3,4,23,24,25,26,27};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Longest Consecutive Subsequnce is " << findLongestConsecutiveSubseq(arr, size) << "." << endl;
    return 0;
}