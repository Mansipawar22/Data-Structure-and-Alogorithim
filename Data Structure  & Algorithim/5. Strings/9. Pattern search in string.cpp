#include<bits/stdc++.h>

using namespace std;

void PatternSearch(string &text, string &pattern , int textsize, int patternsize)
{
    for (int i = 0; i <= textsize - patternsize; i++)
    {
        int j;
        for (j = 0; j < patternsize; j++)
        {
            if(pattern[j] != text[i+j])
            {
                break;
            }
        }
        if(j == patternsize)
        {
            cout << i << " ";
        }
    }
    
}

int main()
{
    string text = "GEEKSFORGEEKS";
    string pattern = "EKS";
    int textsize = text.length();
    int patternsize = pattern.length();
    PatternSearch(text, pattern, textsize, patternsize);
    return 0;
}