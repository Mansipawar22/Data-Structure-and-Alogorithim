#include<iostream>
#include<unordered_map>


using namespace std;

int countsize(bool arr[], int size)
{
    int res = 0;
    for (int i = 0; i < size; i++)
    {
        int c0 = 0;
        int c1 = 0;
        for (int j = i; j < size; j++)
        {
            if(arr[j] == 0){
                c0 += 1;
            }
            else{
                c1 += 1;
            }
            if(c0 == c1)
            {
                res = max(res, c0+c1);
            }
        }
    }
    return res;
}

int countO1(int arr[], int size)
{
    int res  = 0;
    int presum = 0;
    unordered_map<int, int> map;
    for (int i = 0; i < size; i++)
    {
        arr[i] = (arr[i]==0) ? -1 : 1;
    }
    for (int i = 0; i < size; i++)
    {
        presum = presum + arr[i];
        if(presum == 0)
        {
            res  = i + 1;
        }
        if(map.find(presum) == map.end())
        {
            map.insert({presum, i});
        }
        if(map.find(presum) != map.end())
        {
            res = max(res, i-map[presum]);
        }
    }
    return res;
}







int main()
{
    int arr[] = {1,0,1,1,1,0,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << countO1(arr, size);
    return 0;
}