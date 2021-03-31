#include<iostream>


using namespace std;


/*
Naive Solution if T(n) => O(n^3)
where we will use three for loop and check for every triplet 
thet if therir is a triplet for given sum
*/

/*
This is a Efficient Solution where we use 2 pointer approuch
what we will do, basically we will check for every element that is their
any pair for "num - arr[i]", if their is any pair present then definantly their
is a Triplet for given number
T(n) => O(n^2);
for for info read notes on 2 Pointer
*/
bool isPair(int arr[], int left, int right, int sum)
{
    while (left < right)
    {
        if (arr[left] + arr[right] == sum)
        {
            return true;
        }
        else if(arr[left] + arr[right] > sum)
        {
            right--;
        }
        else{
            left++;
        }
    }
    return false;
}


bool isTriplet(int arr[], int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if (isPair(arr, i+1, size-1, num-arr[i]))
        {
            return true;
        }
    }
    return false;
}



int main()
{
    int arr[] = {2,3,4,8,9,20,40};
    int size = 7;
    int num = 33;

    cout  << isTriplet(arr, size, num);
    return 0;
}