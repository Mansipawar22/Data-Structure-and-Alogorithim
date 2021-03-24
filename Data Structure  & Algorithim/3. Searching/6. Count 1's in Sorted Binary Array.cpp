#include<iostream>

using namespace std;


//Find the first Occurance of 1, if array has 1 in it if not it will simply return -1
int firstOccr(bool arr[], int size)
{
    int low = 0;
    int high = size -1;
    while (low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid]  < 1 )
        {
            low = mid + 1;
        }
        else if(arr[mid] == 1)
        {
            if(mid == 0 || arr[mid] != arr[mid-1])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

//In this part we will calculate the Occurance of  1,
//what we will do, we will substract (size-1) with the first occurance of the 1 
//and then add 1 in it, so we will get the number of Occurance
//T(n)==> O(log(n))
//space => O(1)
int Count_1s(bool arr[], int size)
{
    int first_occr = firstOccr(arr, size);
    if (first_occr == -1)
    {
        return 0;
    }
    else
    {
        return (size - first_occr);
    }
}

int main()
{
    int size = 7;
    bool arr[size] = {0, 1, 1, 1, 1, 1, 1};
    cout << Count_1s(arr, size);
    return 0;
}