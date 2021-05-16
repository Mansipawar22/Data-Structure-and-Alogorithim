#include<bits/stdc++.h>

using namespace std;


//Naive Solution
//T(n) => O(n*log(n)) for sorting the strings
bool isAnagramNaive(string s1, string s2)
{
    if(s1.length() != s2.length())
    {
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return(s1==s2);
}



//Efficient Solution
// T(n) => O(n) or O(n+ CHAR) where CHAR is Constant
// Space => O(CHAR)
const int CHAR = 256;
bool isAnagramEfficient(string s1, string s2)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }
    int count[CHAR] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]] ++;
        count[s2[i]] --;
    }
    
    for (int i = 0; i < CHAR; i++)
    {
        if(count[i] != 0)
            return false;
    }
    return true;
}

int main()
{
    string s1 = "abdce";
    string s2 = "decba";
    cout << isAnagramEfficient(s1, s2);
    return 0;
}