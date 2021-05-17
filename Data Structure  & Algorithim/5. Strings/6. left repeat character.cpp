#include<bits/stdc++.h>

using namespace std;

// Naive Solution
// T(n) => O(n^2)
int Left_Most_Repeat_Naive(string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i+1; j < str.length(); j++)
        {
            if(str[i] == str[j])
            {
                return i;
            }
        }
    }
    return -1;
}

// Better Solution
// T(n) => O(n) or O(n + CHAT)
// space => O(CHAR)
// this is a better approuch campare to naive aprrouch but this approuch required extra 
// for loop to find the left reapeat character. we can do more efficiently
const int CHAR = 256;
int Left_Most_Repeat_Better(string &str)
{
    if(str.length() == 1)
    {
        return -1;
    }
    int count[CHAR] = {0};

    for (int i = 0; i < str.length(); i++)
    {
         count[str[i]] ++;
    }
    
    for (int j = 0; j < str.length(); j++)
    {
        if(count[str[j]] > 1)
        {
            return j;
        }
    }
    return -1;
}

// Efficient Approuch
// T(n) = O(n)
// space O(CHAR)
int Left_Most_Repeat_Efficient(string &str)
{
    bool visited[CHAR];
    fill(visited, visited+CHAR, false);
    int res = -1;
    for(int i = str.length() -1; i >= 0 ; i--)
    {
        if(visited[str[i]])
        {
            res = i;
        }
        else{
            visited[str[i]] = true;
        }
    }
    return res;
}

int main()
{
    string str = "Prashant Panwar";
    cout << Left_Most_Repeat_Naive(str);
    cout << endl;
    cout << Left_Most_Repeat_Better(str);
    cout << endl;
    cout << Left_Most_Repeat_Efficient(str);
    return 0;
}