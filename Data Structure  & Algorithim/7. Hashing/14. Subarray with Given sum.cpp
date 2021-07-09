#include<iostream>
#include<unordered_set>


using namespace std;

//Naive solution is same as pair with zero sum.cpp
// T(n) = O(n^2)


//Efficient Solution
// T(n) => O(n)
// space = O(n)
bool isSum(int arr[], int size, int sum)
{
    unordered_set<int> s;
    int pre_sum = 0;
    for (int i = 0; i < size; i++)
    {
        pre_sum = pre_sum+arr[i];
        if(pre_sum==sum)
        {
            return true;
        }
        if(s.find(pre_sum-sum) != s.end())
        {
            return true;
        }
        s.insert(pre_sum);
    }
    return false;
}

int main()
{
    int arr[]={5,8,6,13,3,-1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 22;
    bool res = isSum(arr, size, sum);
    if(res == true)
    {
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0 ;
}