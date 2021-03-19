#include<iostream>

using namespace std;


//Naive Solution which have the Time Complexity of O(n^2)
int checkSorted1(int arr[], int size)
{
    for(int i = 0; i< size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(arr[j] < arr[i])
            {
                return false;
            }
        }
    }
    return true;
}


//My Solution which is also a Efficient Solution with the time Complexity of O(n)
int checkSorted(int arr[], int size)
{
    int i;
    for(int i=0; i<size;i++)
    {
        if(size == 1)
        {
            return true;
        }
        if(arr[i] > arr[i+1])
        {
            return false;
        }
    }
    return true;
}


int main()
{
    //int a[] = {100,200,300,400,500,600};
    //int b[] = {600,500,400,300,200,100};
    //int c[] = {100};
    //int d[] = {100, 200,30};
    int e[] = {100,300,500};
    cout << checkSorted(e, sizeof(e)/sizeof(e[0]));
    return 0;  
}