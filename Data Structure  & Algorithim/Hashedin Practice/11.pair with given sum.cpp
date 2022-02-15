#include<bits/stdc++.h>


using namespace std;


int isPair(int arr[], int size, int sum)
{
    int res = 0;
    unsorted_set<int> set1;
    for(int i = 0; i < size; i++)
    {
        set1.insert(arr[i]);
    }

    for(int i = 0; i < size ; i++)
    {
        int x = sum - arr[i]
        if(set1.find(x) != set1.end())
        {
            res += 1;
        }
    }
}


int main()
{
    int arr[]={3,2,8,15,-8};
    int sum = 11;
    isPair(arr, size, sum);
    return 0;
}