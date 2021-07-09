#include<iostream>
#include<unordered_set>

using namespace std;

//Naive SLoution
bool isZeroPair1(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int sum = arr[i];
        if(sum == 0)
            return true;
        for (int j = i+1; j < size; j++)
        {
            sum = sum + arr[j];
            if(sum == 0)
            {
                return true;
            }
        }
    }
    return false;
}

// Efficent solution
// T(n) => O(n)
//space => O(n)
bool isZeroPair2(int arr[], int size)
{
    unordered_set<int> s;
    int pre_sum = 0;
    for (int i = 0; i < size; i++)
    {
        pre_sum = pre_sum + arr[i];
        if(s.find(pre_sum) != s.end()) // if we have the repeating prefix it's means we have a Zero sum pair
        {
            return true;
        }
        s.insert(pre_sum); // storing the prefix sum
    }
    return false;
}


int main()
{
    int arr[] = { 1, 4, 13, -3, -10, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    bool res = isZeroPair2(arr, size);
    if(res == true)
    {
        cout << "yes";
    }
    else{
        cout << "no";
    }
    return 0;
}