#include<bits/stdc++.h>

using namespace std;

//Naive Solution
//T(n) => O(n^2)
int Intersection(int a[], int b[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        if(i > 0 and a[i-1] == a[i])
            continue;
        for (int j = 0; j < m; j++)
        {
            if(a[i] == b[j])
                cout << a[i] << " ";
        }
    }
}

//Efficient Solution
int Intersection2(int a[], int b[], int n, int m)
{
    int i = 0;
    int j = 0;
    while(i < n and j < m)
    {
        if(i > 0 and a[i-1] == a[i])
        {
            i++; // cuz if previous i  have the intersecion then next i is useless same as if previous i does't have intersection then next
            continue;  // i will not have the intersection 
        }
        if(a[i] < b[j])
        {
            i++;
        }
        else if(a[i] > b[j])
        {
            j++;
        }
        else{
            cout << a[i] <<" ";
            i++;
            j++;
        }
    }
}

int main()
{
    int a[] = {1,2,2,3,4,6,7,9};
    int b[] = {2,4,6,8,9};
    int n  = sizeof(a)/sizeof(a[0]);
    int m  = sizeof(b)/sizeof(b[0]);
    Intersection2(a, b, n, m);
}
