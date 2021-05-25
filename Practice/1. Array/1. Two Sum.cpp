// Given an array of integers, retunr indices
// of the two numbers such that they add upto a specific target

// Given nums = [2, 7, 11, 15]
// target = 9
// O/P nums[0] + nums[1] = 2 + 7 = 9

#include<bits/stdc++.h>


using namespace std;


// Naive Solution
// T(n) => O(n^2)
// space => O(1)
int find_two_sum(int nums[], int size, int target, int &n1, int &n2) // returning value using reference
{
    
    for (int i = 0; i < size; i++)
    {
        int sum = nums[i];
        for (int j = i+1; j < size; j++)
        {
            sum = sum + nums[j];
            if(sum == target)
            {
                n1 = i;
                n2 = j; 
            }
            else{
                sum = nums[i];
            }
        }   
    }
}

// efficent solution
 int find_two_sum2(int nums[], int size, int target)
 {
    // sort(nums, nums + size);
    int l=0;
    int r = size-1;
    while(l < r)
    {
        if(nums[l] + nums[r] == target)
        {
            cout << "[" << l << "]" << " + " << "[" << r << "] = " << target << endl;
            break;
        }
        else if(nums[l] + nums[r] > target)
        {
            r--;
        }
        else{
            l++;
        }
    }    
 }



int main()
{
    int nums[] = {2, 7, 11, 15, 17, 43,24,71,13,15,73,26,92};
    int size = sizeof(nums)/sizeof(nums[0]);
    int target = 37;
    cout << "Hellow World." << endl;
    find_two_sum2(nums, size, target);
     
    return 0;
}