#include<bits/stdc++.h>

using namespace std;


//Naive Solution
//T(n) => O(n)
//space => O(n)
int Sort(int arr1[], int size1)
{
    int temp[size1], count = -1;
    for(int i = 0; i < size1; i++)
    {
        if(arr1[i]==0)
        {
            count++;
            temp[count] = arr1[i];
        }
    }
    for(int j = 0; j < size1; j++)
    {
        if(arr1[j]==1)
        {
            count++;
            temp[count] = arr1[j];
        }
    }
    for(int k = 0; k < size1; k++)
    {
        if(arr1[k]==2)
        {
            count++;
            temp[count] = arr1[k];
        }
    }
    for(int l = 0; l<size1;l++)
    {
        arr1[l] = temp[l];
    }
}

//Efficient Solution
//T(n) => O(n)
//space => O(n)
//Array of three type of element
int Sort2(int arr1[], int size1)
{
    int low = 0;
    int mid = 0;
    int high = size1-1;
    while(mid <= high)
    {
        switch (arr1[mid])
        {
        case 0:
            /* code */
            swap(arr1[low], arr1[mid]);
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr1[mid], arr1[high]);
            high--;
            break;
        }
    }
}

//Sorting array into range
int Sort3(int arr2[], int size2, int range1, int range2)
{
    int low = 0;
    //int mid = 0;
    int high = size2-1;
    for(int mid = 0; mid <= high;)
    {
        if(arr2[mid] < range1)
        {
            swap(arr2[mid], arr2[low]);
            low++;
            mid++;
        }
        else if(arr2[mid] > range2)
        {
            swap(arr2[low], arr2[high]);
            high--;
        }
        else{
            mid++;
        }
    }
    
}
void threeWayPartition(int arr[], int n,
                int lowVal, int highVal)
{
    // Initialize ext available positions for
    // smaller (than range) and greater lements
    int start = 0, end = n-1;
  
    // Traverse elements from left
    for (int i=0; i<=end;)
    {
        // If current element is smaller than
        // range, put it on next available smaller
        // position.
        if (arr[i] < lowVal)
            swap(arr[i++], arr[start++]);
  
        // If current element is greater than
        // range, put it on next available greater
        // position.
        else if (arr[i] > highVal)
            swap(arr[i], arr[end--]);
  
        else
            i++;
    }
}


int main()
{
    //int arr1[] = {2,0,2,0,1,0,2,1,1,2,1,2,0,1,2};
    int arr2[] = {8,4,7,2,1,4,6,9,7,27,5,8,10,1,19,32,12,16};
    //int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    //int range1 = 5;
    //int range2 = 7;
    /*Sort2(arr1, size1);
    for(int x: arr1)
    {
        cout << x << " ";
    }
    */
   //Sort3(arr2, size2, range1, range2);
   threeWayPartition(arr2, size2, 5, 7);
   for(int x: arr2)
    {
        cout << x << " ";
    }
    return 0;
}