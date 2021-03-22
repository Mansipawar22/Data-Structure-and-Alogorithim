//Binary Search Tree Implementation
/*
So in the Binary Search Iteration Approuch is more Effictive Compare to Recursive Solution
cur it Required O(1) Auxilary space Compare to Recursive approuch which required O(log(n))
*/
#include<iostream>


using namespace std;

//Iterative Solutionink
//T(n)=> O(log(n))
//A(s)=> O(1)
int BSearch(int arr[], int size, int num)
{
    int low = 0;
    int high = size-1;
    
    while (low <= high)
    {
        int mid = (low+high)/2;
        if (arr[mid] == num)
            return mid;
        else if (arr[mid] > num)
            high = mid-1;
        else
            low = mid +1;
    }
    return -1;
}



//My Solution which is recursive Solution
//T(n)=> O(log(n))
//A(S)=> O(log(n))
int RBSearch(int arr[], int low, int high, int num)
{
    int mid = (high+low)/2;
    if(low > high)
    {
       return -1;
    }
    if (arr[mid] == num)
    {
        return mid;
    }
    if (arr[mid] < num)
    {
        return RBSearch(arr, mid+1, high, num);
    }
    if (arr[mid] > num)
    {
        return RBSearch(arr, low, mid-1, num);
    }
}



int main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    int low = 0;
    int high = size-1;
    int arr[size];
    cout << "Array Should be Sorted." << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    int num;
    cout << "Enter a number to Search: ";
    cin >> num;
    
    cout << RBSearch(arr, low, high,  num);
    return 0;
}