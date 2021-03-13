#include<iostream>

using namespace std;

/*Naive Solution
In this Soluyion we will call RotateLeftOne for D time
Time Complexity= Theta(n*d)
Aux Space = Theta(1)
*/
int RotateLeftOne(int arr[], int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        if(i == 0)
        {
            temp = arr[i];
            arr[i] = arr[i+1];
        }
        if(i == (size-1))
        {
            arr[i] = temp;
        }
        else
        {
            arr[i] = arr[i+1];
        }
    }
}
int RotateLeftD1(int arr[], int d, int size)
{
    for (int i = 0; i < d; i++)
    {
        RotateLeftOne(arr, size);
    }  
}


/*
My Solution Which is more Efficient Solution compare to Naive Solution
Time Complexity  Theta(d + n -d + d) ==> Theta(n+d) ==> Theta(n)
Aux Space = Theta(d)
*/
int RotateLeftD2(int arr[], int d, int size)
{
    int temp[d];
    int count = 0;
    //Theta(d)
    for(int i=0;i<d;i++)
    {
        temp[i] = arr[i];
    }
    //Theta(n-d)
    for(int i=0;i<size-d;i++)
    {
        arr[i] = arr[i+d];
    }
    //Theta(d)
    for(int i=size-d; i < size; i++)
    {
        arr[i] = temp[count];
        count++;
    }
}

/*
Most Effifcient Solution
Time Comlexity => Theta(d + n -d + n) => Theta(2n) => Theta(n)
Aux Space => Theta(1)
*/
void reverse(int arr[], int low, int high)
{
    while (low<high)
    {
        /* code */
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void RotateLeftD3(int arr[], int d, int size)
{
    reverse(arr, 0, d-1);
    reverse(arr, d, size-1);
    reverse(arr, 0, size-1);
}






int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int d = 4;
    RotateLeftD3(arr, d, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}