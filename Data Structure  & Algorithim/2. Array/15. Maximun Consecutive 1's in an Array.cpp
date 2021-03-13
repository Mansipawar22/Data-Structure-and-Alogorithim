#include<iostream>

using namespace std;


//My Solution + Naive Solution
// T(n) = O(n^2)
//A(s) = O(1) 
int maxConsecutive1(int arr[], int size)
{
    int res=0;
    for (int i = 0; i < size; i++)
    {
        int current = 0;
        for (int j = i; j < size; j++)
        {
            if (arr[j] == 1)
            {
                current++;
            }
            else
            {
                break;
            }
            res = max(current, res);
        }
    }
    return res;
}


//Effiecient Solutionby me
//T(n)=> O(n)
//A(s)=> O(1)
int maxConsecutive1Effective(int arr[], int size)
{
    int res =  0;
    int current=0;

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == 1) //or if(arr[i]==0){current=0;}
        {
             current++;
            //res = max(current, res);
            //We can change the value of result in this if block
        }
        else // or else{current++;res = max(current, res);}
        {
           current=0;
        }
        res = max(current, res);
    }
    return res;
}

int main()
{
    int arr[] = {1,0,1,1,1,1,0,1,1,1,1,1,1,1};
    cout << maxConsecutive1Effective(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}