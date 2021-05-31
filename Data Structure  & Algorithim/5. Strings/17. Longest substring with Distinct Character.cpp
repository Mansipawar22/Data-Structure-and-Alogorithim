#include<bits/stdc++.h>

using namespace std;

// Niave solution
// T(n) => O(n^3)
// space => O(256)
bool areDistinct(string str, int i, int j)
{
    // Note: Devault value in visited are false
    vector<bool> visited(256);

    for (int k = i; k <= j; k++)    // O(n)
    {
        if( visited[str[k]] == true)
        {
            return false;
        }
        visited[str[k]] = true;
    }
    return true;
}
int longestsubstr1(string str)
{
    int n = str.size();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(areDistinct(str, i, j))
            {
                res = max(res, j - i + 1);
            }
        }
    }
    return res;
}

// Better Solution
// T(n) => O(n^2)
// space => O(256)
int longestsubstr2(string str)
{
    int n = str.length();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        vector<bool> visited(256);
        for (int j = i; j < n; j++)
        {
            if(visited[str[j]] == true) // not using saperate areDistinct to check for the distinct character
            {
                break;
            }
            else{
                res = max(res, j - i + 1);
                visited[str[j]] = true;
            }
        }
        visited[str[i]] = false;   
    }
    return res;
}


// efficient solution
// T(n) => O(n)
// space => O(256)
int longestsubstr3(string str)
{
    int n = str.length();
    int res = 0;
    vector<int> previous(256);
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        i = max(i, previous[str[j]]+1);
        int maxEnd = j - i + 1;
        res = max(res, maxEnd);
        previous[str[j]] = j;
    }
    return res;
}



int main()
{
    string str;
    cout << "Enter the String to find a Longest Substring with Distinct Characters:";
    cin >> str; 
    cout << longestsubstr1(str);
    cout << longestsubstr2(str);
    cout << longestsubstr3(str);
    return 0;
}