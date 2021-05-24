#include<bits/stdc++.h>


using namespace std;



// Naive Solution
// T(n) => O(n^3)
int Longest_Proper_prefix_suffix(string &str, int n)
{
    for (int len = n-1; len > 0; len--)
    {
        bool flag = true;
        for (int i = 0; i < len; i++)
        {
            if(str[i] != str[n-len+i])
            {
                flag = false;
                break;
            }
        }
        if(flag == true)
        {
            return len;
        }
    }
    return 0;
}


// void fillLPS(string &str, int lps[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         lps[i] = Longest_Proper_prefix_suffix(str, i+1);
//     }
// }



// Efficient Solution 
// T(n) => O(n)
void fillLPS(string &str, int lps[], int size)
{
    int n = str.length();
    int len = 0;
    int i = 1;
    lps[0] = 0;
    while(i < n)
    {
        if(str[i] == str[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else{
            if(len == 0)
            {
                lps[i] = 0;
                i++;
            }
            else{
                len = lps[len-1];
            }
        }
    }
}

int main()
{
    string str = "AAABAAAAC";
    int size = str.length();
    int lps[size];
    fillLPS(str, lps, size);
    for(int x: lps)
    {
        cout << x << " ";
    }
    return 0;
}