#include<iostream>

using namespace std;


//Naive Solution
//T(n)=> O(n^2)
int maxEvenOdd1(int arr[], int size)
{
    int res = 1;
    for (int i = 0; i < size; i++)
    {
        int curr = 1;
        for (int j = i+1; j < size; j++)
        {
            if ((arr[j]%2==0 && arr[j+1]%2!=0) || (arr[j]%2!=0 && arr[j+1]%2==0))
                curr++;
            else
                break; 
        }
        res = max(res, curr);
    }
    return res;
}

//Efficient Solution
//T(n) => O(n)
//A(s) => 
int maxEvenOdd2(int arr[], int size)
{
    int res = 1;
    int curr = 1;
    for (int i = 1; i < size; i++)
    {
        if ((arr[i]%2==0&&arr[i-1]%2!=0)||(arr[i]%2!=0&&arr[i-1]%2==0))//Condition when current element is the Alternating of previous element
        {
            curr++;
            //res = max(curr, res);
        }
        else//Condition when Current element is not the alternating of the previous element
        {
            curr=1;
        }
        
        res = max(curr, res);//we can change the result in if condition too.
    }
    
    return res;
}


int main()
{
    int arr[] = {7,10,3,14,21};
    cout << maxEvenOdd2(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}