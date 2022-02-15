#include<bits/stdc++.h>


using namespace std;

// bool isSubsequence(string s1, string s2)
// {
//     int n = s1.length();
//     int m = s2.length();
//     if(n < m)
//     {
//         return false;
//     }

//     int j = 0;
//     for(int i = 0; i < n and j < m; i++)
//     {
//         if(s1[i] == s2[j])
//         {
//             j++;
//         }
//     }
//     return (j == m);
// }

//recursive solution
bool isSubsequence2(string* s1, string* s2, int n, int m)
{
    if(m == 0)
    {
        return true;
    }
    if(n == 0)
    {
        return false;
    }
    if(s1[n-1] == s2[m-1])
    {
        return isSubsequence2(s1,s2, n-1, m-1);
    }
    else
    {
        return isSubsequence2(s1,s2,n-1, m);
    }
}

int main()
{
    string s1 = "geeksforgeeks";
    string s2 = "gress";
    int n = s1.length();
    int m = s2.length();
    cout << isSubsequence2(s1, s2, n, m);
    return 0;
}