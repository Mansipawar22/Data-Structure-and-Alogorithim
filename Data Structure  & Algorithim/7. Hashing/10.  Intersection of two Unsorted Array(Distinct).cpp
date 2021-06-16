#include<iostream>
#include<unordered_set>

using namespace std;

// Naive Solution
// T(n) => O(m*(m+n))
// Space => O(1)
int Intersection(int a[], int b[], int m, int n)
{
    int res = 0;
    for (int i = 0; i < m; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                flag = true;
                break;
            }
        }
        if(flag == true)
        {
            continue;
        }
        for(int j = 0; j < n; j++)
        {
            if(a[i] == b[j])
            {
                res++;
                break;
            }
        }
    }
    return res;
}


// Effifcient Solution(my approuch)
// T(n) => O(m+n)
// space => O(m+n)
int Intersection1(int a[], int b[], int m, int n)
{
    unordered_set<int> s1, s2;
    for (int i = 0; i < m; i++)
    {
        s1.insert(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        s2.insert(b[i]);
    }
    int res = 0;
    for(auto x: s1)
    {
        if(s2.find(x) != s2.end())
        {
            res++;
            s2.erase(x);
            
        }
    }
    // for(auto y:s1)
    // {
    //     cout << y << " ";
    // }
    // cout << endl;
    // for(auto z:s2)
    // {
    //     cout << z << " ";
    // }
    return res;
}




int Intersection2(int a[], int b[], int m, int n)
{
    int res = 0;
    unordered_set <int> s;
    for (int i = 0; i < m; i++)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(s.find(b[i]) != s.end())
        {
            res++;
            s.erase(b[i]);

        }
    }
    return res;
}


int main()
{
    int a[] = {30,5,80};
    int b[] = {30,5,30,80};
    int c[] = {10,20};
    int d[] = {20,30};

    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);
    cout << Intersection1(a, b, m, n);

    return 0;
}