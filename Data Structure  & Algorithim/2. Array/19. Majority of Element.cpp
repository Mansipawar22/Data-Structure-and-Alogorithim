#include<iostream>

using namespace std;

//Naive Solution and my solution too
//T(n)=> O(n^2)
//A(s)=> O(1)
int MajorityElement(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count=1;
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > size/2)
            return i;
    }
    return -1;
}

//Effifcient Solution
//Boyer Moore's Majority Vote Algorithim
//T(n)=>O(n)
//A(s)=> O(1)
int FindMajority(int arr[], int size)
{
    /*
    Phase One
    In this Phase we will find the Condidate with the Majority
    we will check that is there a majority element in the Array.
    */
    int majority = 0;
    int count = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[majority] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            majority = i;
            count = 1;
        }
    }
    /*
    Phase Two
    In this Phase Phase we will Ensure that the majority element we Get
    from the First phase is really a Majority element by checking the Frequency of that element
    if the Frequency of the Element is Greater than the "Frequency > (size/2)" then the Element is the Majority ELement in the Array
    */
   count = 0;
   for (int i = 0; i < size; i++)
   {
       if(arr[majority] == arr[i])
       {
           count++;
       }
   }
   if (count > size/2)
   {
       return arr[majority];
   }
   else
   {
       return -1;
   }
   
}



int main()
{
    int size;
    cout << "Hello World";
    cout << "Enter size of Array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
        
    cout << "Element " << FindMajority(arr, size) << " have the Majority in the Array.";
    return 0;
}