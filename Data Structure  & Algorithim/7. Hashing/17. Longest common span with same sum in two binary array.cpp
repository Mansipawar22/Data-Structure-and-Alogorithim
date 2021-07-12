#include<iostream>
#include<unordered_map>

using namespace std;


int Maxlenght(int arr[], int n)
{
    int result = 0;
    int presum = 0;
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        presum += arr[i];

        if(presum == 0)
        {
            result = i + 1;
        }

        if(map.find(presum) == map.end())
        {
            map.insert({presum, i});
        }
        
        if(map.find(presum) != map.end())
        {
            result = max(result, i-map[presum]);
        }
    }
    // cout << result<< endl
    return result;
}




int maxcommon(bool arr1[], bool arr2[], int size)
{
    int tempArray[size];
    int res;
    for (int i = 0; i < size; i++)
    {
        tempArray[i] = arr1[i] - arr2[i];
    }
    res = Maxlenght(tempArray, size);
    return res;
}

int main()
{
    bool arr1[] = {0, 1, 0, 0, 0, 0};
    bool arr2[] = {1, 0, 1, 0, 0, 1};
    int size = sizeof(arr1)/sizeof(arr2[0]);
    cout << maxcommon(arr1, arr2, size);
    return 0;
}