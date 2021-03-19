#include<iostream>

using namespace std;

//My solution
int getSecondLargest1(int arr[], int size)
{
    int large = 0;
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > arr[large])
            large = i;
    }
    int seclarge = 1;
    for(int j = 0; j < size; j++)
    {   if(arr[j] > arr[seclarge] && arr[j] < arr[large] )
            seclarge = j;
    }
    return seclarge;
}

//Naive solution
int getSecondLargest2(int arr[], int size)
{
    int largest = 0;
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > arr[largest])
            largest = i;
    }

    int res = -1;
    for(int j=0; j<size; j++)
    {
        if(arr[j] != arr[largest])
        {
            if(res == -1)
            {
                res = j;
            }
            else if(arr[j] > arr[res])
            {
                res = j;
            }
        }
    }
    return res;
}


//Efficient Solution
//Time Complexity is Theta(n)
//Space Complexity is Theta(1)
//This Methos will find the Second Largest element in the one iteration/Traversion.
int getSecondLargest3(int arr[], int size)
{
    int res = -1;
    int largest = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > arr[largest])
        {
            res = largest;
            largest= i;
        }
        else if(arr[i] != arr[largest])
        {
            if(res == -1 || arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}



int main()
{
    int arr1[] = {1, 5, 8, 20};
    int arr2[] = {16, 3, 15, 8, 12};
    int arr3[] = {16, 5, 10};
    int arr4[] = {55, 55,14,36,18,38,46};
    int arr5[] = {10, 10, 4, 10, 9};
    cout << "SecondLargest number at Index: " << getSecondLargest3(arr1, sizeof(arr1)/sizeof(arr1[0])) << endl;
    cout << "SecondLargest number at Index: " << getSecondLargest3(arr2, sizeof(arr2)/sizeof(arr2[0])) << endl;
    cout << "SecondLargest number at Index: " << getSecondLargest3(arr3, sizeof(arr3)/sizeof(arr3[0])) << endl;
    cout << "SecondLargest number at Index: " << getSecondLargest3(arr4, sizeof(arr4)/sizeof(arr4[0])) << endl;
    cout << "SecondLargest number at Index: " << getSecondLargest3(arr5, sizeof(arr5)/sizeof(arr5[0])) << endl;
    return 0;
}