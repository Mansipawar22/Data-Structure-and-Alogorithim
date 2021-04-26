#include<bits/stdc++.h>

using namespace std;



//Naive Solution
//T(n) => O(n)
//space => O(n)
int Sort1(int arr[], int size)
{
    int temp[size];
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] < 0)
        {
            temp[count] = arr[i];
            count++;
        }
    }
    for(int j =0; j < size; j++)
    {
        if(arr[j] >= 0)
        {
            temp[count] = arr[j];
            count++;
        }
    }
    for(int k = 0; k< size; k++)
    {
        arr[k] = temp[k] ;
    }
}

//Efficient Solutuion
//T(n) => O(n)
//space => O(1)
//Using Hoare's Partition algorithim
int Sort_nagative_posititve(int arr1[], int size1)
{
    int i = -1;
    int j = size1+1;
    while (true)
    {
        do
        {    i++;   } while (arr1[i] < 0);
        
        do
        {    j--;   } while (arr1[j] >= 0);
        
        if(i >= j)
            return 0;
        
        swap(arr1[i], arr1[j]);
    }
}

//Sorting Even odd Element in the array
int Sort_Even_odd(int arr2[], int size2)
{
    int l = -1;
    int h = size2+1;
    while (true)
    {
        do
        {   l++;    } while (arr2[l]%2==0);

        do
        {    h--;   } while (arr2[h]%2!=0);
        
        if(l >= h)
            return 0;

        swap(arr2[l], arr2[h]);
    }
    
}

bool Sort_boolean(bool arr3[], int size3)
{
    int a = -1;
    int b = size3+1;
    while (true)
    {
        do{    a++;    }while (arr3[a] == 0);

        do{    b--;    }while (arr3[b] == 1);
         
        if(a >= b) return 0;

        swap(arr3[a], arr3[b]);
    }
    
}

int main()
{
    int arr1[] = {15, -3, -2, 16, 4,-6}; //Negative and positive array
    int arr2[] = {21,43,45,64,24,86,36,7,25,86,23};//Even Odd Array
    bool arr3 [] = {1,0,0,1,0,1,0,1,1,0};
    
    int size1 = 6;
    int size2 = 10;
    int size3 = 10;
    
    cout << "\nSorting Negative and Positive element." << endl;
    
    for(int i = 0; i < size1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    Sort_nagative_posititve(arr1, size1);
    for(int i = 0; i < size1; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << "\nSorting Even and Odd element." << endl;

    for(int i = 0; i < size2; i++)
    {
        cout << arr2[i] << " ";
    }
    Sort_Even_odd(arr2, size2);
    cout << endl;
    for(int i = 0; i < size2; i++)
    {
        cout << arr2[i] << " ";
    }

    cout << "\nSorting Boolean element." << endl;
    
    for(int i = 0; i < size3; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
    Sort_boolean(arr3, size3);
    for(int i = 0; i < size3; i++)
    {
        cout << arr3[i] << " ";
    }
    return 0;
}