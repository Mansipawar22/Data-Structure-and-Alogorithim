#include<iostream>
#include<unordered_set>


using namespace std;


bool findSum(int arr[], int sum, int size)
{
    unordered_set<int> s;
    cout << size;
    for (int i = 0; i < size; i++)
    {
        s.insert(arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        int x = sum - arr[i];
        s.erase(arr[i]);
        if(s.find(x) != s.end())
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {10,2,5,1,7,3,6,8,4,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 19;
    bool res = findSum(arr, sum, size);
    if(res == true)
    {
        cout <<"yes";
    }
    else{
        cout << "no";
    }
}