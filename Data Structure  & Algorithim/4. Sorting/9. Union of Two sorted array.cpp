#include<bits/stdc++.h>

using namespace std;


//Naive Solution
//T(n) => O((m+n)*lon(m+n))
int PrintUnion1(int a[], int b[], int size_of_a, int size_of_b)
{
    int temp[size_of_a+size_of_b];
    for (int i = 0; i < size_of_a; i++)
    {
        temp[i] = a[i];
    }
    for (int j = 0; j < size_of_b; j++)
    {
        temp[size_of_a+j] = b[j];
    }
    sort(temp, temp+size_of_a+size_of_b); //Array.Sort(arr, arr+n)
    for (int i = 0; i < size_of_a+size_of_b; i++)
    {
        if(i == 0 or temp[i] != temp[i-1])
        {
            cout << temp[i] << " ";
        }
    }     
}

int PrintUnion2(int a[], int b[], int size_of_a, int size_of_b)
{
    int i = 0, j = 0;
    while (i < size_of_a and j < size_of_b)
    {
        if(i > 0 and a[i] == a[i-1]){ i++; continue; }
        if(j > 0 and b[j] == b[j-1]){ j++; continue; }
        if(a[i] < b[j]){ cout << a[i++] << " "; }
        if(a[i] > b[j]){ cout << b[j++] << " "; }
        else{ cout << a[i] << " "; i++; j++; }
    }
    while (i < size_of_a)
    {
        if(i==0 or a[i] != a[i-1]){ cout << a[i++] << " "; }
    }
    while (j < size_of_b)
    {
        if(j==0 or b[j] != b[j-1]){ cout << b[j++] << " "; }
    }
    
}


int main()
{
    int a[] = {2, 3, 5, 9, 10};
    int b[] = {1, 5, 6, 6, 10, 11, 15};
    int size_of_a = sizeof(a)/sizeof(a[0]);
    int size_of_b = sizeof(b)/sizeof(b[0]);
    PrintUnion2(a, b, size_of_a, size_of_b); 
    return 0;
}

