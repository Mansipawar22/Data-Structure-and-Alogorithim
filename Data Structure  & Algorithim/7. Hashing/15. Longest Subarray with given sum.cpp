#include<iostream>
#include<unordered_map>


using namespace std;


//Niave solution
// T(n) = O(n^2)
int maxlength(int arr[], int size, int sum)
{
    int res = 0;
    for (int i = 0; i < size; i++)
    {
        int cur_sum = 0;
        for (int j = i; j < size; j++)
        {
            cur_sum = cur_sum + arr[j];
            if(cur_sum == sum)
            {
                res = max(res, j-i+1);
            }
        }
    }
    return res;
}

//Efficient solution
//T(n) = O(n)
//space = O(n)
int Maxlength(int arr[], int n, int sum)
{
    unordered_map<int, int> map;
    int presum = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        presum = presum + arr[i];
        if(presum == sum)
        {
            res = i + 1;
        }
        if(map.find(presum) == map.end())
        {
            map.insert({presum, i});
        }
        if(map.find(presum-sum) != map.end())
        {
            res = max(res, i - map[presum - sum]);
        }
    }
    return res;
}

int main()
{
    int arr[] = {5,8,-4,-4,9,-2,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    cout << Maxlength(arr, size, sum);
    return 0;
}
