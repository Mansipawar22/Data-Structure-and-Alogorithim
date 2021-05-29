#include<bits/stdc++.h>

const int CHAR = 256;

using namespace std;
 
bool isSame(int CP[], int CT[]) // Comparing Pattern Window and current pattern size txt window.
{
    for (int i = 0; i < CHAR; i++)
    {
        if(CP[i] != CT[i])
            return false;
    }
    return true;
}


bool isPresent(string txt, string pat)
{
    int CT[CHAR] = {0};
    int CP[CHAR] = {0};
    for (int i = 0; i < pat.length(); i++)
    {
        CT[txt[i]]++;
        CP[pat[i]]++;
    }
    for (int i = pat.length(); i < txt.length(); i++)
    {
        if (isSame(CP, CT)) // Compareing current pattern size first text string with pattern
        {
            return true;
        }
        CT[txt[i]]++; // sliding the current window by one
        CT[txt[i - pat.length()]]--; // deleting the previous character from the current window.
    }
    return false;
}


int main()
{
    string txt = "geeksforgeeks";
    string pat = "frog";
    cout << isPresent(txt, pat);
    return 0;
}
        
