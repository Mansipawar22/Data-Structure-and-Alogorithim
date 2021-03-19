#include<iostream>

using namespace std;


//Naive Solution of the program.
int getLargest1(int arr[], int size)
{
    for(int i = 0; i < size;i++)
    {
        bool flag = true;
        for(int j = 0; j < size; j++)
        {
            if(arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        if(flag==true)
            return i; 
    }
    return -1;
}

//Efficient Solution
int getLargest2(int arr[], int size)
{
    int res = 0;
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > arr[res])
        {
            res = i;
        }
    }
    return res;
}




int main()
{
    int arr[] = {36,21,42,56,16,5,45,31,68,13,56,46,5,84,65,68,35,16,46,61,5,5,17,56,43,13,2,1,8,45,1,8,1,51,68,4,51,6,87,46,98,14,9,8};
    //cout << "Largest number at Index: " << getLargest1(arr, sizeof(arr)/sizeof(arr[0]));
    cout << "Largest number at Index: " << getLargest2(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}