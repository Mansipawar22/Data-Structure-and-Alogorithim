#include<bits/stdc++.h>

using namespace std;


// Naive Solution
// T(n) => O(n^2)
// space => O(1)
int Leftmost_None_Repeating_Naive(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        bool flag = false;
        for (int j = 0; j < str.length(); j++)
        {
            if(i != j and str[i] == str[j])
            {
                flag = true; // repeating
                break;
            }
        }
        if(flag == false) // not repeating
        {
            return i;
        }
    }
    return -1;
}

// Better Solution
// T(n) => O(n)
// space => O(CHAR)
// Required two traversal
const int CHAR = 256;
int Leftmost_None_Repeating_Better(string str)
{
    if(str.length() == 1)
    {
        return 0;
    }
    int count[CHAR];
    fill(count, count+CHAR, 0);
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if(count[str[i]] == 1)
        {
            return i;
        }
    }
    return -1;
}

// Efficient Solution
// T(n) => O(n)
// space => O(CHAR)
// Required one traversa
int Leftmost_None_Repeating_Efficient(string str)
{
    int FirstIndex[CHAR];
    fill(FirstIndex, FirstIndex+CHAR, -1);

    for (int i = 0; i < str.length(); i++)
    {
        if(FirstIndex[str[i]] == -1)
        {
            FirstIndex[str[i]] = i;

        }
        else{
            FirstIndex[str[i]] = -2;
        }
    }
    int res = INT16_MAX;
    for (int i = 0; i < CHAR; i++)
    {
        if(FirstIndex[i] > 0)
            res = min(res,FirstIndex[i]);
    }
    return (res == INT16_MAX)?!-1: res;
}


int main()
{
    string str = "GeeksforG eeks";
    cout << Leftmost_None_Repeating_Naive(str)  << endl;
    cout << Leftmost_None_Repeating_Better(str) << endl;
    cout << Leftmost_None_Repeating_Efficient(str) << endl;
    return 0;
}